
#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "IHttpGetData.h"

class AddressExtractor  
{

};

class Address
{

};


class PlaceDescriptionService
{
public:
	PlaceDescriptionService(IHttpGetData * http ); 
	
	std::string summaryDercription( const std::string & latitude, const std::string & longtitude) const; 

	std::string createGetRequeestUrl(const std::string & latitude, const std::string & longtitude) const ; 

	std::string summaryDercription( const Address & address ) const ; 
private:
	IHttpGetData * http_; 
};


PlaceDescriptionService::PlaceDescriptionService( IHttpGetData * http ): http_(http) {}
std::string PlaceDescriptionService::summaryDercription(
	const std::string & latitude, const std::string & longtitude) const 
	{
		auto jsonResponse = http_->get(createGetRequeestUrl(latitude, longtitude));
	
		AddressExtractor extractor;

		auto address = extractor.addressFrom(jsonResponse);

		return summaryDescription(address);
	}


std::string PlaceDescriptionService::createGetRequeestUrl(const std::string & latitude, const string & longtitude) const 
{
	return "";
}

std::string PlaceDescriptionService::summaryDescription (const Address & address) const 
{
	return address.road + ", "  + address.city + ", " + address.state + ", " + address.country;
}


using namespace testing; 

class APlaceDescriptionService :public Test
{
public:
	static const std::string ValidLatitude;
	static const std::string ValidLongtitude;
};

const std::string APlaceDescriptionService::ValidLatitude("32.005");
const std::string APlaceDescriptionService::ValidLongtitude("-103.44");


class HttpStub: public IHttpGetData
{
public:
 	virtual void initialized () override {}

	std::string get ( const std::string & url ) const override 
	{
		return "dfa";
	}
};


TEST_F (APlaceDescriptionService, ReturnsDescriptionForValidLocation)
{
	HttpStub httpStub;
	PlaceDescriptionService service($httpStub);
	auto description = service.summaryDercription(ValidLatitude, ValidLongtiude);

	ASSERT_THAT (description, Eq("Drury Ln, Fountain, CO, US"));
}



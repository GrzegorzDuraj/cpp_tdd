

#include "HttpGetData.h"


HttpGetData::~HttpGetData(){};
void HttpGetData::initialized()
{
	std::cout << "HttpGetData::Initialize() " << std::endl;
}

std::string HttpGetData::get (const std::string& url ) const  
{
	return "";
}



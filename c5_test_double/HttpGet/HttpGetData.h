
#pragma once

#include "IHttpGetData.h"


class HttpGetData : public IHttpGetData
{
public:
	~HttpGetData();
	virtual void initialized();
	virtual std::string get (const std::string& url ) const ; 
};


	

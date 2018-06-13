

#pragma once

#include <iostream>
class IHttpGetData
{
public:
	~IHttpGetData(){};
	virtual void initialized()=0;
	virtual std::string get (const std::string& url ) const = 0; 
};


	

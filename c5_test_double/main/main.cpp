#include <iostream> 

#include "HttpGetData.h"
#include "IHttpGetData.h"

int main() 
{
	std::cout<<"\n\n\n\n test double" << std::endl;

	IHttpGetData *h = new HttpGetData;

	h->initialized();
	


}

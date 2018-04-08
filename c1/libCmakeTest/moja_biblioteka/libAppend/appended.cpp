#include "appended.h"
#include <iostream>

Appended::Appended()
{
	std::cout<< "appended constr" << std::endl;
}
Appended::~Appended()
{
	std::cout<< "appended destr" << std::endl;
}

Appended::TestFunction()
{
	std::cout<< "appended TestFunction" << std::endl;
}
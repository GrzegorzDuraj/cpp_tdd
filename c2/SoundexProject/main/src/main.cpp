#include <iostream>

#include "Soundex.h" 


int main () 
{	
	std::cout << "Hello world, Soundex Projet" << std::endl;
	
	Soundex soundex;
	std::cout << soundex.GetNameOfClass() << std::endl;
	
	std::cout << soundex.encode("encode") << std::endl;;
	
	return 0; 
}
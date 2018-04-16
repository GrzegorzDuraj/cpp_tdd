#include<iostream>

#include "Soundex.h" 

int main(int argc, char** argv)
{
	Soundex sound;
	
	bool b = sound.test_f(true);
	
	std::cout << b << std::endl;
	
	std::cout << sound.returnHelloWorld() << std::endl;
	
	std::cout << "Hello World" << std::endl;
	return 0;
}


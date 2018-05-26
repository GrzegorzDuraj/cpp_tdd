#pragma once
#include <iostream>


class Soundex
{
	public:
	std::string GetNameOfClass ();
	
	std::string encode(const std::string &word)const;
	std::string zeroPad(const std::string &word)const;
};
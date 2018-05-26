#pragma once
#include <iostream>


class Soundex
{
	public:
	std::string GetNameOfClass ();
	
	std::string encode(const std::string &word)const;
	std::string encodedDigit (char letter) const;

	private:
	std::string head(const std::string &word)const;
    std::string zeroPad(const std::string &word)const;
    std::string encodedDigits(const std::string &word)const;
	std::string tail (const std::string & word) const;
	bool isComplete (const std::string & word) const;
	std::string lastDigit (const std::string & word) const;
	std::string upperFront(const std::string & string ) const;

};
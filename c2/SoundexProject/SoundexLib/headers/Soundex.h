#pragma once
#include <iostream>


class Soundex
{
	public:
	std::string GetNameOfClass ();
	
	std::string encode(const std::string &word)const;
	std::string encodedDigit (char letter) const;

	private:
	const std::string NotADigit {"*"};	
	const size_t MaxCodeLength{4};


	
	std::string head(const std::string &word)const;
    std::string zeroPad(const std::string &word)const;
    std::string encodedDigits(const std::string &word)const;
	std::string tail (const std::string & word) const;
	bool isComplete (const std::string & word) const;
	std::string lastDigit (const std::string & word) const;
	std::string upperFront(const std::string & string ) const;
    void encodeHead(std::string & encoding, const std::string & word) const;
	void encodeTail (std::string & encoding, const std::string & word) const;
    void encodeLetter (std::string & encoding, char letter, char lastLetter) const;
	char lower(char c ) const;
	bool isVowel(char letter) const;
};
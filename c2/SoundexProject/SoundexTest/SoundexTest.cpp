#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>


class Soundex 
{
public:
	std::string encode(const std::string &word)const
	{
		return "A";
	}

};

TEST (SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	Soundex soundex;

	std::string encoded = soundex.encode("A");
	
	ASSERT_THAT(encoded, testing::Eq("A"));

}

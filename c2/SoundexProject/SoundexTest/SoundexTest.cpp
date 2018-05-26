#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "Soundex.h"



using ::testing::Eq;

TEST (SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	Soundex soundex;

	std::string encoded = soundex.encode("A");
	
	ASSERT_THAT(encoded, testing::Eq("A"));

}

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <string>
#include "Soundex.h"

using namespace testing;

class SoundexEncoding:public Test 
{
public:
	Soundex soundex;
};


TEST_F (SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	ASSERT_THAT(soundex.encode("A"), Eq("A000"));
}

TEST_F (SoundexEncoding, PadsWithZerosToEnsureThreeDigts)
{

  ASSERT_THAT(soundex.encode("I"), Eq("I000"));
}

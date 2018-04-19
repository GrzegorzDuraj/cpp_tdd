#include "gmock/gmock.h"
#include "Soundex.h"

using ::testing::Eq;


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	Soundex soundex;
	std::string A ("A");
	
	std::string encoded = soundex.encode(A);

	ASSERT_THAT(encoded,Eq("A"));
	

}


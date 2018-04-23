#include "gmock/gmock.h"
#include "Soundex.h"

using ::testing::Eq;


TEST(SoundexEncoding, RetainsSoleLetterOfOneLetterWord)
{
	Soundex soundex;

	
//	
	bool sTrue = soundex.test_f(true);

	ASSERT_THAT(sTrue, true);
    ASSERT_THAT(sTrue, true);
	ASSERT_THAT(sTrue, false);
	
	

	

}


TEST(SoundexEncoding2, RetainsSoleLetterOfOneLetterWord22)
{
	Soundex soundex;
	std::string A ("A");
	std::string encoded = soundex.encode(A);
	ASSERT_THAT(encoded,Eq("A"));

}



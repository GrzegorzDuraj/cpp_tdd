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

TEST_F (SoundexEncoding, ReplacesConsonantsWithAppropiateDigits)
{
	ASSERT_THAT(soundex.encode("Ax"), Eq("A200"));
}

TEST_F ( SoundexEncoding, IgnoresNonAlphabetis)
{
	ASSERT_THAT(soundex.encode("A#"), Eq("A000"));
}

TEST_F (SoundexEncoding, ReplacesMultipleConsosantsWithDigits)
{
	ASSERT_THAT (soundex.encode("Acdl"), Eq("A234"));
}

TEST_F (SoundexEncoding, LimitsLengthToFourCharacters)
{
	ASSERT_THAT( soundex.encode("Dcdlb").length(), Eq(4u));
}

TEST_F (SoundexEncoding, IgnoresVowelLikeLetters)
{
	ASSERT_THAT( soundex.encode("BaAeEiIoOuUhHyYcdl"), Eq("B234"));
}

TEST_F(SoundexEncoding, CombinesDuplicateEncoding)
{
	ASSERT_THAT (soundex.encodedDigit('b'), Eq(soundex.encodedDigit('f')));
	ASSERT_THAT (soundex.encodedDigit('c'), Eq(soundex.encodedDigit('g')));
	ASSERT_THAT (soundex.encodedDigit('d'), Eq(soundex.encodedDigit('t')));
	ASSERT_THAT (soundex.encode("Abfcgdt"), Eq("A123"));
}

TEST_F(SoundexEncoding, UppercasesFirstLetter)
{
	ASSERT_THAT (soundex.encode("abcd"), StartsWith("A"));
}


TEST_F(SoundexEncoding, IgnoresCaseWhenEncodingConsonants)
{
	ASSERT_THAT(soundex.encode("BCDL"), soundex.encode("bcdl"));
} 


TEST_F(SoundexEncoding, CombinesDuplicateCodesWhen2ndLetterDuplicates1st)
{
	ASSERT_THAT(soundex.encode("Bbcd"), Eq("B230"));
}

TEST_F(SoundexEncoding, DoesNotCombineDuplicateEncodingsSeparatedByVowels)
{
	ASSERT_THAT(soundex.encode("jbob"), Eq("J110"));
}

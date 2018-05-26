#include<Soundex.h>
#include <unordered_map>

static const size_t MaxCodeLength {4};

std::string Soundex::GetNameOfClass ()
{
	return std::string ("Soundex Class");
}

std::string Soundex::encode(const std::string &word)const
{
	return zeroPad(upperFront(head(word)) + encodedDigits(tail(word)));

}

std::string Soundex::upperFront(const std::string & string) const
{
	return std::string(1,std::toupper(static_cast<unsigned char> (string.front())));
}

std::string Soundex::tail(const std::string & word) const 
{
	return word.substr(1);
}

std::string Soundex::zeroPad(const std::string & word) const 
{
	size_t zerosNeeded = MaxCodeLength - word.length();
	
	return word + std::string (zerosNeeded, '0');
}


std::string Soundex::head (const std::string & word) const
{
	return word.substr(0,1);
}

std::string Soundex::encodedDigits(const std::string & word) const
{
	std::string encoding; 
  	for (auto letter: word)
	{
		if (isComplete(encoding)) break;
		if (encodedDigit(letter) != lastDigit(encoding))
		{
 			encoding += encodedDigit(letter);	
		}
	}	
	return encoding; 

}

bool Soundex::isComplete(const std::string & encoding) const
{
	return  encoding.length() == MaxCodeLength - 1;
}

std::string Soundex::lastDigit (const std::string & encoding) const
{
	if (encoding.empty()) return "";
	return std::string (1,encoding.back());
} 

const std::string NotADigit {""};

   std::string Soundex::encodedDigit(char letter) const {
      const std::unordered_map<char, std::string> encodings {
         {'b', "1"}, {'f', "1"}, {'p', "1"}, {'v', "1"},
         {'c', "2"}, {'g', "2"}, {'j', "2"}, {'k', "2"}, {'q', "2"},
                     {'s', "2"}, {'x', "2"}, {'z', "2"},
         {'d', "3"}, {'t', "3"},
         {'l', "4"},
         {'m', "5"}, {'n', "5"},
         {'r', "6"}
      };
      auto it = encodings.find(letter);
      return it == encodings.end() ? NotADigit : it->second;
   }


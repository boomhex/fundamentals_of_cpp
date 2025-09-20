#include <string>
#include <cctype>

int countVowel(std::string sentence)
{
    int vowelCount = 0;

    // Loop through characters in sentence.
    for (size_t index = 0; index != sentence.length(); ++index)
    {
        switch (tolower(sentence[index]))    // Make use of the fallthrough
        {                                    // to catch all vowels.
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                ++vowelCount;
            break;
        }
    }
    return vowelCount;
}
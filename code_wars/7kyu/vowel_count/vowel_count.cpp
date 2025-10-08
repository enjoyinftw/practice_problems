#include <string>
#include <regex>
#include <iterator>

using namespace std;

int getCount(const string &inputStr)
{
    int num_vowels = 0;
    std::regex vowel_re("a|e|i|o|u");
    num_vowels = std::distance(std::sregex_token_iterator(inputStr.begin(), inputStr.end(), vowel_re), {});
    return num_vowels;
}
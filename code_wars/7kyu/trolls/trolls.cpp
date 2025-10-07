#include <string>
#include <regex>

std::string disemvowel(const std::string &str)
{
    std::regex vowel_re("A|E|I|O|U|a|e|i|o|u");

    return std::regex_replace(str, vowel_re, "");
}
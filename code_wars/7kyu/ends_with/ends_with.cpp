#include <string>
bool solution(std::string const &str, std::string const &ending)
{
    if (str.length() < ending.length())
    {
        return false; // If ending is longer, it cannot be a suffix of str
    }
    size_t l = str.length() - ending.length();

    return str.substr(l) == ending;
}
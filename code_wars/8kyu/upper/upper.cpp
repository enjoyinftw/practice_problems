#include <string>
#include <algorithm>

std::string makeUpperCase(const std::string &input_str)
{
    std::string str = input_str;
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c)
                   { return std::toupper(c); });
    return str;
}
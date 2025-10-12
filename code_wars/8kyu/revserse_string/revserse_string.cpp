#include <string>

std::string reverseString(const std::string &str)
{
    std::string result = str;
    if (result.empty())
    {
        return result;
    }
    for (size_t i = 0, j = str.length() - 1; i < j; i++, j--)
    {
        std::swap(result[i], result[j]);
    }
    return result;
}
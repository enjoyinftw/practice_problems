#include <string>
#include <cctype>
using namespace std;

std::string to_alternating_case(const std::string &str)
{
    std::string result{};
    for (auto item : str)
    {
        if (islower(item))
            result += ((char)toupper(item));
        else
            result += ((char)tolower(item));
    }
    return result;
}
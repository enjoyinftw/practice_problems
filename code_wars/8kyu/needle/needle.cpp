#include <vector>
#include <string>
#include <algorithm>

std::string findNeedle(const std::vector<std::string> &haystack)
{
    // You may use the function std::to_string to convert numbers to strings for easy concatenation.
    // E.g., ("hi" + std::to_string(123)) ==> "hi123". Of course, that's only one of many approaches.
    auto pos = (std::find(haystack.begin(), haystack.end(), "needle") - haystack.begin());

    return "found the needle at position " + std::to_string(pos);
}
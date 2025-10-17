#include <vector>
#include <string>


std::string smash(const std::vector<std::string> &words)
{
    std::string result{};
    for (auto word: words){
        result += word + " ";
    }
    return result.erase(result.find_last_not_of(" ") + 1);
}
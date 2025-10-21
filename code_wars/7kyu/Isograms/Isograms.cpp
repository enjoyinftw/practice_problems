#include <string>
#include <set>

bool is_isogram(const std::string &str)
{
    std::set<char> uniques;
    for (auto ch: str){
        ch = tolower(ch);
        if (uniques.find(ch) != uniques.end()){
            return false;
        }
        uniques.insert(ch);
    }
    return true;
}
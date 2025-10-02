#include <vector>
#include <string>
#include <algorithm>

bool check(const std::vector<std::string> &seq, const std::string &elem)
{
    if (std::find(seq.begin(), seq.end(), elem) == seq.end()){
        return false;
    }
    else {
        return true;
    }
}
    
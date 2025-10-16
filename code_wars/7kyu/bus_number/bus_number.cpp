#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>> &busStops)
{
    int result = 0;
    for (auto busStop : busStops)
    {
        result += busStop.first - busStop.second;
    }
    return result;
}
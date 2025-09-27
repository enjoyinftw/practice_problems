#include <vector>
#include <numeric>

int square_sum(const std::vector<int> &numbers)
{
    auto square_acc = [](int x, int y)
    { return x + y * y; };

    auto result = std::accumulate(numbers.begin(), numbers.end(), 0, square_acc);
    return result;
}

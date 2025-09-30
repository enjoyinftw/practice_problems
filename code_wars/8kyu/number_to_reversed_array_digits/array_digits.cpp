#include <string>
#include <vector>

std::vector<int> digitize(unsigned long n)
{
    std::string temp = std::to_string(n);

    size_t l = 0;
    size_t r = temp.size() - 1;

    std::cout << "\nstring: " << temp;

    while (l < r)
    {
        std::swap(temp[l], temp[r]);
        ++l;
        --r;
    };
    std::cout << "\nstring: " << temp << "\n";

    std::vector<int> result{};

    for (size_t i = 0; i < temp.size(); ++i)
    {
        result.push_back(temp[i] - 48);
    }

    return result;
}

int main()
{
    std::cout << "\nresult: ";
    auto result = digitize(1234);

    for (size_t i = 0; i < result.size(); ++i)
    {
        std::cout << result[i];
        if (i < result.size() - 1)
            std::cout << ", ";
    }
    return 0;
}

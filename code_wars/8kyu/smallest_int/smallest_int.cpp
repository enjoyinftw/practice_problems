#include <vector>

using namespace std;

int findSmallest(vector<int> list)
{
    int currentMinimum = list[0];
    for (auto currentItem : list)
    {
        if (currentItem < currentMinimum)
        {
            currentMinimum = currentItem;
        }
    }
    return currentMinimum;
}
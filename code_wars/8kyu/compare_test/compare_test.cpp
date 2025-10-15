#include <vector>
#include <numeric>
bool betterThanAverage(std::vector<int> classPoints, int yourPoints)
{
    float avg = std::accumulate(classPoints.begin(), classPoints.end(), 0) / (float)classPoints.size();
    return avg < yourPoints;
}
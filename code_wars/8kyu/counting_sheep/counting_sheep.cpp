#include <vector>

using namespace std; 

int count_sheep(vector<bool> arr) 
{
  int count = 0;
  for (auto sheep: arr){
    if (sheep == true){
      ++count;
    }
  }
  return count;
}
//Moving Zeros to the End

#include <vector>
#include <algorithm>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  
  std::vector<int> result = input;
  result.erase(std::remove(result.begin(), result.end(), 0), result.end());
  
  for(int i : input) if(i == 0) result.push_back(i);
  return result;
  }
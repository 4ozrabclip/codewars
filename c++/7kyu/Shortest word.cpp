#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

int find_short(std::string str)
{
  std::vector<int> counts;
  int count = 0;
  for(char &c : str){
    if(c == ' '){
      counts.push_back(count);
      count = 0;
    }
    else{
      count++;
    }
  }
  counts.push_back(count);
  
  std::sort(counts.begin(), counts.end());
  return counts[0];
}
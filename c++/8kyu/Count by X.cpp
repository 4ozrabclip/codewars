//Count By X
#include <vector>
std::vector<int> countBy(int x,int n){
  std::vector<int> result;
  for(int i = x; i <= n*x; i += x){
    result.push_back(i);
  }
  return result;
}
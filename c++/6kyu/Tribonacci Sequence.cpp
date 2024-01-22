#include <algorithm>
#include <vector>
#include <numeric>

std::vector<int> tribonacci(std::vector<int> signature, int n)
{
  if(n == 0){
    return {};
  }
  else if(n <= 3){
    int eraseAmount = 3 - n;
    signature.erase(signature.end() - eraseAmount, signature.end());
    return signature;
  }
  else{
    for(int i = 0; i < n - 3; i++){
      auto sum = std::reduce(signature.begin() + i, signature.end());
      signature.push_back(sum);

    }
      return signature;
  }
}
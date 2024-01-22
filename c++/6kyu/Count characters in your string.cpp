//Count Characters in Your String
#include <map>
#include <string>

std::map<char, unsigned> count(const std::string& string) {
  std::map<char, unsigned> ccount;
  for(char c : string){
    if(ccount.find(c) == ccount.end()){
      ccount[c] = 1;
    }
    else{
      ccount[c]++;
    }
  }
    return ccount;
}
//Fix String Case

#include <string>
#include <cctype>

std::string solve(const std::string& str){
  int uppercount = 0, lowercount = 0;
  std::string result = str;
  for(char c : str){
    //int result = c.isupper() ? uppercount++ : lowercount++;
    if(std::isupper(c)){
      uppercount++;
    }
    else if(std::islower(c)){
      lowercount++;
    }
  }
  if(uppercount == lowercount){
    for(char& c : result) {
      c = std::tolower(c);
    }
  }
  else if(uppercount > lowercount){
    for(char& c : result) {
      c = std::toupper(c);
    }
  }
  else if(lowercount > uppercount){
    for(char& c : result) {
      c = std::tolower(c);
    }
  }
  return result;
}
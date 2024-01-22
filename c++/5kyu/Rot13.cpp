//Rot13

#include <string>
#include <cctype>
using namespace std;

string rot13(string msg)
{
  string encrypt = "";
  for(char c : msg){
    if(isalpha(c)){
      
      if(isupper(c)){
        if(isalpha(c + 13) && isupper(c + 13)){
          c += 13;
        }
        else{
          int t = 12 - ('Z' - c);
          c = 'A' + t;
        }
      }
      else if(islower(c)){
          if(isalpha(c + 13) && islower(c + 13)){
            c += 13;
        }
        else{
          int q = 12 - ('z' - c);
          c = 'a' + q;
          }
        }
    }
    encrypt += c; 
  }
  return encrypt;
}
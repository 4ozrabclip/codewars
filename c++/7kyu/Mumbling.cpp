//mumbling
#include <string>
#include <cctype>
class Accumul
{
public:
    static std::string accum(const std::string &s){
      std::string outp = "";
      
      for(size_t i = 0; i < s.length(); i++){
        outp += toupper(s[i]);
        for(size_t j = 0; j < i; j++){
          outp += tolower(s[i]);
        }
        if(i != s.length() -1) outp += '-';
      }
      
    return outp;
    }
};
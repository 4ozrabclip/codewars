#include <string>


std::string encrypt(std::string text, int n)
{
  if(n <= 0) return text;
  

  
       for(int j = 0; j < n; j++){
         
           std::string odd = "";
            std::string even = "";
        
            for(int i = 0; i < text.length(); i++){

                if(((i % 2) == 0) || (i == 0)){
                  even += text[i];
                }
                else {
                  odd += text[i];
                }
            }
         
         text = odd + even;

       }

  
  return text;
}

std::string decrypt(std::string encryptedText, int n)
{
  
  for(int j = 0; j < n; j++){
    int halfway = (encryptedText.length() / 2);
    std::string odd = encryptedText.substr(0, halfway);
    std::string even = encryptedText.substr(halfway);
  
    std::string decryptedText = "";
          for(int i = 0; i < halfway; i++){
            decryptedText += even[i];
            decryptedText += odd[i];

            }
            if (encryptedText.length() % 2 != 0) decryptedText += even[halfway];
            

    encryptedText = decryptedText;
    }
      
//             
          
    return encryptedText;
}

/*
temp = [s]
  
  T_i  et_i sats!

*/
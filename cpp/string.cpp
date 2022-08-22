/*
* Copyright @kranthy.com@gmail.com
*/

#include <iostream>

/* is all chars are unique in string */
bool isUniqChar(std::string s)
{
  if (s.size() > 0) 
  {
    bool state[256] = {false};
    for (int i = 0; i < s.size(); i++) {
      if (state[s[i]]) 
      {
        return false;
      } else {
        state[s[i]] = true;
      }
    }

    return true;
  }

  return true;
}

int main()
{
  std::cout << "String World" << std::endl;

  std::cout << "isUniq " << isUniqChar("helo") << std::endl;
  
  return 0;
}


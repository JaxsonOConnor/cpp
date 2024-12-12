#include <iostream>
#include <string>

std::string rot(std::string& str) {
  char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
  for (int i=0; i<str.length(); i++) {
    char ch = str[i];
    for (int j=0; j<4; j++) {
      if (ch == vowels[j]) {
        str.erase(i);
        break;
      }
    }
  }
  str.append("uzz");
  return str;
}

int main(int argc, char **argv) {
  std::string s;
  std::cin >> s;
  s = rot(s);
  std::cout << std::endl << s << std::endl;
  return 0;
}

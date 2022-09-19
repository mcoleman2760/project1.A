#include <iostream>
#include <string>
int main() {
  
std::string s;
  while(std::cin >> s) {
if (s == "R") {
  std::cout << "Right \n";
}
  else if (s == "L") {
  std::cout << "Left \n";
}
  else if (s == "D") {
  std::cout << "Down \n";
}
  else if (s == "U") {
  std::cout << "Up \n";
}
    }
}

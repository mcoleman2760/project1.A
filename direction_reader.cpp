/*
Author: Michael Coleman
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Project 1A

This program reads a sequence of letters and prints out its corresponding direction.
*/

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

#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::fstream f ("input.txt", f.in);
  if (!f.is_open()) throw "oops";

  std::string str;
  f >> str;
  std::cout << str;

  return 0;
}

//
// Created by uyplayer on 13/2/2025.
//
#include <iostream>
#include <type_traits>


int main() {
  int a {100};
  int b {200};
  decltype(a+b) c = a;
  auto x = 1;
  auto y = 2;
  decltype(x+y) z;
  if (std::is_same<decltype(x), int>::value)
    std::cout << "type x == int" << std::endl;
  if (std::is_same<decltype(x), float>::value)
    std::cout << "type x == float" << std::endl;
  if (std::is_same<decltype(x), decltype(z)>::value)
    std::cout << "type z == type x" << std::endl;
  return 0;
}
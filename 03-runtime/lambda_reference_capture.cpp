//
// Created by uyplayer on 15/2/2025.
//


#include<iostream>


int main() {

  int value = 1;
  auto copy_value = [&value] {
    return value;
  };
  value = 100;
  auto stored_value = copy_value();
  std::cout << "stored_value = " << stored_value << std::endl;
  return 0;
}
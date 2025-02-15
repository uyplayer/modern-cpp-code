//
// Created by uyplayer on 15/2/2025.
//


#include <iostream>



using foo = void (int);
void functional(foo f) { // 参数列表中定义的函数类型 foo 被视为退化后的函数指针类型 foo*
  f(1); // 通过函数指针调用函数
}

int main() {

  auto f = [](int value) {
    std::cout << value << std::endl;
  };

  functional(f); // 传递闭包对象，隐式转换为 foo* 类型的函数指针值
  f(100); // lambda 表达式调用

  return 0 ;
}
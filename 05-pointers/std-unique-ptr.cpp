//
// Created by uyplayer on 16/2/2025.
//


#include<iostream>
#include <memory>



struct Foo {
  Foo() { std::cout << "Foo::Foo" << std::endl; }
  ~Foo() { std::cout << "Foo::~Foo" << std::endl; }
  void foo() { std::cout << "Foo::foo" << std::endl; }
};

void f(const Foo &) {
  std::cout << "f(const Foo&)" << std::endl;
}


int main() {
  // std::unique_ptr<int> pointer = std::make_unique<int>(10); // make_unique 从 C++14 引入
  // std::unique_ptr<int> pointer2 = pointer; // 非法

  std::unique_ptr<Foo> p1(std::make_unique<Foo>());
  // p1 不空, 输出
  if (p1) p1->foo();
  {
    std::unique_ptr<Foo> p2(std::move(p1));
    // p2 不空, 输出
    f(*p2);
    // p2 不空, 输出
    if(p2) p2->foo();
    // p1 为空, 无输出
    if(p1) p1->foo();
    p1 = std::move(p2);
    // p2 为空, 无输出
    if(p2) p2->foo();
    std::cout << "p2 被销毁" << std::endl;
  }
  // p1 不空, 输出
  if (p1) p1->foo();
  return 0;
}
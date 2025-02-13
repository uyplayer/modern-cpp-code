//
// Created by uyplayer on 13/2/2025.
//


#include <initializer_list>
#include <vector>
#include <iostream>

class MagicFoo {
public:
    std::vector<int> vec;
    MagicFoo(std::initializer_list<int> list) {
        // 从 C++11 起, 使用 auto 关键字进行类型推导
        for (auto it = list.begin(); it != list.end(); ++it) {
            vec.push_back(*it);
        }
    }
};



int main() {
    MagicFoo magicFoo = {1, 2, 3, 4, 5};
    std::cout << "magicFoo: ";
    for (auto it = magicFoo.vec.begin(); it != magicFoo.vec.end(); ++it) {
        std::cout << *it << ", ";
    }
    std::cout << std::endl;


    auto add14 = [](auto x, auto y) -> int {
        return x+y;
    };


    auto i = 5; // type int
    auto j = 6; // type int
    std::cout << add14(i, j) << std::endl;
    // std::cout << add20(i, j) << std::endl;
    auto auto_arr2[10] = {1,2,3,4};
    return 0;
}
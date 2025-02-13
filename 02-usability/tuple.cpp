//
// Created by uyplayer on 13/2/2025.
//


#include <iostream>
#include <tuple>


std::tuple<int,double,std::string> f() {
    return std::make_tuple(1, 2.0, "three");
}


int main() {
    auto [x, y, z] = f();
    std::cout << x << ", " << y << ", " << z << std::endl;
    return 0;
};
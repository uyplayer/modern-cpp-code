//
// Created by uyplayer on 13/2/2025.
//

#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> vec = {1,2,3,4,5,6,7,8,9,10};

    const std::vector<int>::iterator itr = std::find(vec.begin(), vec.end(), 2);
    std::cout << *itr << std::endl;
    if (itr != vec.end()) {
        *itr = 3;
    }
    const std::vector<int>::iterator itr2 = std::find(vec.begin(), vec.end(), 3);
    if (itr2 != vec.end()) {
        *itr2 = 4;
    }

    for (std::vector<int>::iterator element = vec.begin(); element != vec.end();++element)
        std::cout << *element << std::endl;
    return 0;

}
//
// Created by uyplayer on 13/2/2025.
//

#include <iostream>
#include <vector>
#include <algorithm>




int main()
{

    std::vector<int> vec = {1, 2, 3, 4};
    for (auto element : vec)
        std::cout << element << std::endl; // read only
    for (auto &element : vec) {
        element += 100;                      // writeable
    }
    for (auto element : vec)
        std::cout << element << std::endl; // read only
    return 0;
}
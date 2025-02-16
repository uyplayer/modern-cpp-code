#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

int main() {
    std::vector<int> v;
    std::cout << "size:" << v.size() << std::endl;         // 输出 0
    std::cout << "capacity:" << v.capacity() << std::endl; // 输出 0

    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    std::cout << "size:" << v.size() << std::endl;         // 输出 3
    std::cout << "capacity:" << v.capacity() << std::endl; // 输出 4

    v.push_back(4);
    v.push_back(5);
    std::cout << "size:" << v.size() << std::endl;         // 输出 5
    std::cout << "capacity:" << v.capacity() << std::endl; // 输出 8

    v.clear();
    std::cout << "size:" << v.size() << std::endl;         // 输出 0
    std::cout << "capacity:" << v.capacity() << std::endl; // 输出 8

    v.shrink_to_fit();
    std::cout << "size:" << v.size() << std::endl;         // 输出 0
    std::cout << "capacity:" << v.capacity() << std::endl; // 输出 0

    std::array<int, 4> arr = {1, 2, 3, 4};

    std::cout << " arr.empty()  " << arr.empty() << std::endl;
    std::cout << " arr.size() " << arr.size() << std::endl;
    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return b < a;
    });
    // 使用传统的 for 循环
    for (std::array<int, 4>::iterator it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << std::endl;
    }



    // 使用传统的 for 循环打印排序后的结果
    for (std::array<int, 4>::iterator it = arr.begin(); it != arr.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}

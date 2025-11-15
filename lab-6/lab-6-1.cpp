#include <iostream>
#include <vector>
#include "lab-6-1.h"

int main() {
    std::vector<int> numbers = {1, 3, 5, 7, 9, 2, 4, 6, 8};

    // Поиск существующего элемента
    auto result1 = Find(numbers.begin(), numbers.end(), 2);
    if (result1 != numbers.end()) {
        std::cout << "Element found: " << *result1 << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    // Поиск несуществующего элемента
    auto result2 = Find(numbers.begin(), numbers.end(), 15);
    if (result2 == numbers.end()) {
        std::cout << "Element 15 not found" << std::endl;
    }

    // Поиск в части диапазона
    auto result3 = Find(numbers.begin() + 2, numbers.begin() + 6, 7);
    if (result3 != numbers.begin() + 6) {
        std::cout << "found an element in a part of the range: " << *result3 << std::endl;
    } else {
        std::cout << "not found an element in a part of the range:" << std::endl;
    }

    return 0;
}

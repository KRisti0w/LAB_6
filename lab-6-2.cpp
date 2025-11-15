#include <iostream>
#include <vector>
#include "lab-6-2.h"

int main() {
    std::vector<int> sorted_data = {1, 3, 5, 7, 9, 11, 13, 15};

    // Поиск существующего элемента
    auto result1 = findInSorted(sorted_data.begin(), sorted_data.end(), 7);
    if (result1 != sorted_data.end()) {
        std::cout << "Found: " << *result1 << " at position "
                  << (result1 - sorted_data.begin()) << std::endl;
    }

    // Поиск несуществующего элемента
    auto result2 = findInSorted(sorted_data.begin(), sorted_data.end(), 8);
    if (result2 == sorted_data.end()) {
        std::cout << "Element 8 not found" << std::endl;
    }

    // Поиск в части диапазона
    auto result3 = findInSorted(sorted_data.begin() + 2, sorted_data.begin() + 6, 9);
    if (result3 != sorted_data.begin() + 6) {
        std::cout << "Found in subrange: " << *result3 << std::endl;
    }

    return 0;
}
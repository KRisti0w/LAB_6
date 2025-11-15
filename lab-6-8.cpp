#include <iostream>
#include <vector>
#include "lab-6-8.h"

void printVector(const std::vector<int>& vec, const std::string& name) {
    std::cout << name << " = {";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    // Тестовые случаи
    std::vector<int> test1 = {1, 0, -8, -9, 0, 10, 23, -7};


    std::cout << "Before plusesDeleter:" << std::endl;
    printVector(test1, "test1");

    // Применяем функцию
    plusesDeleter(test1);

    std::cout << "\nAfter plusesDeleter:" << std::endl;
    printVector(test1, "test1");


    return 0;
}
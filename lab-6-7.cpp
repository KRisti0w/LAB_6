#include <iostream>
#include <list>
#include "lab-6-7.h"

void printList(const std::list<int>& lst, const std::string& name) {
    std::cout << name << " = {";
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        std::cout << *it;
        if (std::next(it) != lst.end()) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    // Тестовые случаи
    std::list<int> test1 = {1, 5, 4, -3};


    std::cout << "Before reverseNum:" << std::endl;
    printList(test1, "test1");


    // Применяем функцию
    reverseNum(test1);


    std::cout << "\nAfter reverseNum:" << std::endl;
    printList(test1, "test1");

    return 0;
}
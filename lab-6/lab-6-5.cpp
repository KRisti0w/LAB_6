#include <iostream>
#include <string>
#include <vector>
#include "lab-6-5.h"

void printVector(const std::vector<std::string>& vec, const std::string& name) {
    std::cout << name << " = {";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    // Тестовые случаи
    std::string test1 = "Can you can";
    std::string test2 = "hello,world.Hello World";
    std::string test3 = "one,two.three ONE Two three";
    std::string test4 = "a a a b b c c c";
    std::string test5 = ""; // Пустая строка
    std::string test6 = "   ,.  ,. "; // Только разделители
    std::string test7 = "Single";
    std::string test8 = "MixED,CASE,mixed,Case,MIXED";

    // Тест 1: базовый случай
    std::cout << "Input: \"" << test1 << "\"" << std::endl;
    auto unique1 = uniqueWords(test1);
    printVector(unique1, "unique1");
    std::cout << std::endl;

    // Тест 2: регистронезависимость
    std::cout << "Input: \"" << test2 << "\"" << std::endl;
    auto unique2 = uniqueWords(test2);
    printVector(unique2, "unique2");
    std::cout << std::endl;

    // Тест 3: несколько слов с повторениями
    std::cout << "Input: \"" << test3 << "\"" << std::endl;
    auto unique3 = uniqueWords(test3);
    printVector(unique3, "unique3");
    std::cout << std::endl;

    // Тест 4: частые повторения
    std::cout << "Input: \"" << test4 << "\"" << std::endl;
    auto unique4 = uniqueWords(test4);
    printVector(unique4, "unique4");
    std::cout << std::endl;

    // Тест 5: пустая строка
    std::cout << "Input: \"" << test5 << "\"" << std::endl;
    auto unique5 = uniqueWords(test5);
    printVector(unique5, "unique5");
    std::cout << std::endl;

    // Тест 8: смешанный регистр
    std::cout << "Input: \"" << test8 << "\"" << std::endl;
    auto unique8 = uniqueWords(test8);
    printVector(unique8, "unique8");

    return 0;
}
#include <iostream>
#include <string>
#include "lab-6-3.h"

int main() {
    // Тестовые случаи
    std::string test1 = "Hello world";
    std::string test2 = "Hello,world.How are you?";
    std::string test3 = "One,two.three four";
    std::string test4 = "Hello,HELLO,hello"; // Разные регистры - разные слова
    std::string test5 = ""; // Пустая строка
    std::string test6 = "   ,.  ,. "; // Только разделители
    std::string test7 = "Single";

    std::cout << "Test 1: \"" << test1 << "\" - " << wordsCounter(test1) << " words" << std::endl;
    std::cout << "Test 2: \"" << test2 << "\" - " << wordsCounter(test2) << " words" << std::endl;
    std::cout << "Test 3: \"" << test3 << "\" - " << wordsCounter(test3) << " words" << std::endl;
    std::cout << "Test 4: \"" << test4 << "\" - " << wordsCounter(test4) << " words" << std::endl;
    std::cout << "Test 5: \"" << test5 << "\" - " << wordsCounter(test5) << " words" << std::endl;
    std::cout << "Test 6: \"" << test6 << "\" - " << wordsCounter(test6) << " words" << std::endl;
    std::cout << "Test 7: \"" << test7 << "\" - " << wordsCounter(test7) << " words" << std::endl;

    return 0;
}
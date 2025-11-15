#include <iostream>
#include <string>
#include "lab-6-6.h"

int main() {
    // Тестовые случаи
    std::string test1 = "can you can a can";
    std::string test2 = "hello,world.Hello World";
    std::string test3 = "one,two.three ONE Two three";
    std::string test4 = "a a a b b c c c";
    std::string test5 = ""; // Пустая строка
    std::string test6 = "   ,.  ,. "; // Только разделители
    std::string test7 = "Single";
    std::string test8 = "MixED,CASE,mixed,Case,MIXED";
    std::string test9 = "word1 word2 word3"; // Все слова разные
    std::string test10 = "same same same"; // Все слова одинаковые

    std::cout << "Test 1: \"" << test1 << "\" - " << diffWordsCounter(test1) << " different words" << std::endl;
    std::cout << "Test 2: \"" << test2 << "\" - " << diffWordsCounter(test2) << " different words" << std::endl;
    std::cout << "Test 3: \"" << test3 << "\" - " << diffWordsCounter(test3) << " different words" << std::endl;
    std::cout << "Test 4: \"" << test4 << "\" - " << diffWordsCounter(test4) << " different words" << std::endl;
    std::cout << "Test 5: \"" << test5 << "\" - " << diffWordsCounter(test5) << " different words" << std::endl;
    std::cout << "Test 6: \"" << test6 << "\" - " << diffWordsCounter(test6) << " different words" << std::endl;
    std::cout << "Test 7: \"" << test7 << "\" - " << diffWordsCounter(test7) << " different words" << std::endl;
    std::cout << "Test 8: \"" << test8 << "\" - " << diffWordsCounter(test8) << " different words" << std::endl;
    std::cout << "Test 9: \"" << test9 << "\" - " << diffWordsCounter(test9) << " different words" << std::endl;
    std::cout << "Test 10: \"" << test10 << "\" - " << diffWordsCounter(test10) << " different words" << std::endl;

    return 0;
}
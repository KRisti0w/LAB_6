#include <iostream>
#include <string>
#include <map>
#include "lab-6-4.h"

int main() {
    // Тестовые случаи
    std::string test1 = "can you can";
    std::string test2 = "hello,world.hello world";
    std::string test3 = "one,two.three one two three";
    std::string test4 = "Hello,hello,HELLO"; // Разные регистры - разные слова
    std::string test5 = ""; // Пустая строка
    std::string test6 = "   ,.  ,. "; // Только разделители
    std::string test7 = "single";
    std::string test8 = "a a a b b c";
    std::string test9 = "word.with.dots,word with spaces,word,with,commas";

    // Тест 1: базовый случай
    std::cout << "Test 1: \"" << test1 << "\"" << std::endl;
    auto words1 = wordsMapCounter(test1);
    for (const auto& [word, count] : words1) {
        std::cout << "  \"" << word << "\": " << count << std::endl;
    }

    // Тест 2: смешанные разделители
    std::cout << "\nTest 2: \"" << test2 << "\"" << std::endl;
    auto words2 = wordsMapCounter(test2);
    for (const auto& [word, count] : words2) {
        std::cout << "  \"" << word << "\": " << count << std::endl;
    }

    // Тест 3: несколько повторений
    std::cout << "\nTest 3: \"" << test3 << "\"" << std::endl;
    auto words3 = wordsMapCounter(test3);
    for (const auto& [word, count] : words3) {
        std::cout << "  \"" << word << "\": " << count << std::endl;
    }

    // Тест 4: регистрозависимость
    std::cout << "\nTest 4: \"" << test4 << "\"" << std::endl;
    auto words4 = wordsMapCounter(test4);
    for (const auto& [word, count] : words4) {
        std::cout << "  \"" << word << "\": " << count << std::endl;
    }

    // Тест 5: пустая строка
    std::cout << "\nTest 5: \"" << test5 << "\"" << std::endl;
    auto words5 = wordsMapCounter(test5);
    std::cout << "  Result size: " << words5.size() << std::endl;

    // Тест 8: частотный анализ
    std::cout << "\nTest 8: \"" << test8 << "\"" << std::endl;
    auto words8 = wordsMapCounter(test8);
    for (const auto& [word, count] : words8) {
        std::cout << "  \"" << word << "\": " << count << std::endl;
    }

    return 0;
}
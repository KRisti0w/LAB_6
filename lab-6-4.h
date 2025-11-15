#ifndef UNTITLED_LAB_6_4_H
#define UNTITLED_LAB_6_4_H

#pragma once
#include <string>
#include <map>

std::map<std::string, int> wordsMapCounter(const std::string& str) {
    std::map<std::string, int> wordCount;
    std::string word;

    for (char c : str + ' ') { // Добавляем разделитель в конец для обработки последнего слова
        if (c == ' ' || c == ',' || c == '.') {
            if (!word.empty()) {
                wordCount[word]++;
                word.clear();
            }
        } else {
            word += c;
        }
    }

    return wordCount;
}

#endif //UNTITLED_LAB_6_4_H

#ifndef UNTITLED_LAB_6_5_H
#define UNTITLED_LAB_6_5_H

#pragma once
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#include <cctype>

std
::vector<std::string> uniqueWords(const std::string& str) {
    std::set<std::string> uniqueSet;
    std::string word;

    for (char c : str + ' ') { // Добавляем разделитель для обработки последнего слова
        if (c == ' ' || c == ',' || c == '.') {
            if (!word.empty()) {
                // Преобразуем слово к нижнему регистру
                std::transform(word.begin(), word.end(), word.begin(),
                               [](unsigned char ch) { return std::tolower(ch); });
                uniqueSet.insert(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    return std::vector<std::string>(uniqueSet.begin(), uniqueSet.end());
}
#endif //UNTITLED_LAB_6_5_H

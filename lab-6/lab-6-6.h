#ifndef UNTITLED_LAB_6_6_H
#define UNTITLED_LAB_6_6_H

#pragma once
#include <string>
#include <set>
#include <algorithm>
#include <cctype>

int diffWordsCounter(const std::string& str) {
    std::set<std::string> uniqueWords;
    std::string word;

    for (char c : str + ' ') { // Добавляем разделитель для обработки последнего слова
        if (c == ' ' || c == ',' || c == '.') {
            if (!word.empty()) {
                std::transform(word.begin(), word.end(), word.begin(),
                               [](unsigned char ch) { return std::tolower(ch); });
                uniqueWords.insert(word);
                word.clear();
            }
        } else {
            word += c;
        }
    }

    return uniqueWords.size();
}

#endif //UNTITLED_LAB_6_6_H

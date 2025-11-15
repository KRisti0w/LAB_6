#ifndef UNTITLED_LAB_6_3_H
#define UNTITLED_LAB_6_3_H

#pragma once
#include <string>

int wordsCounter(const std::string& str) {
    int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ' || c == ',' || c == '.') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            count++;
        }
    }

    return count;
}

#endif //UNTITLED_LAB_6_3_H

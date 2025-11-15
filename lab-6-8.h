#ifndef UNTITLED_LAB_6_8_H
#define UNTITLED_LAB_6_8_H

#pragma once
#include <vector>

void plusesDeleter(std::vector<int>& v) {
    // Проходим по вектору и удаляем положительные элементы
    for (auto it = v.begin(); it != v.end(); ) {
        if (*it > 0) {
            it = v.erase(it);
        } else {
            ++it;
        }
    }
}
#endif //UNTITLED_LAB_6_8_H

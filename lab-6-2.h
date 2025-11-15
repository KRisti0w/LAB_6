#ifndef UNTITLED_LAB_6_2_H
#define UNTITLED_LAB_6_2_H

#pragma once
#include <vector>
#include <iterator> // для std::distance

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first,
                                        std::vector<int>::iterator last,
                                        int el) {
    // Реализация бинарного поиска
    auto left = first;
    auto right = last;

    while (left < right) {
        // Вычисляем средний элемент
        auto mid = left + std::distance(left, right) / 2;

        if (*mid == el) {
            return mid; // Элемент найден
        } else if (*mid < el) {
            left = mid + 1; // Ищем в правой половине
        } else {
            right = mid; // Ищем в левой половине
        }
    }

    return last; // Элемент не найден
}

#endif //UNTITLED_LAB_6_2_H

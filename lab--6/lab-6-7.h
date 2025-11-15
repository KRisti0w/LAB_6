#ifndef UNTITLED_LAB_6_7_H
#define UNTITLED_LAB_6_7_H

#pragma once
#include <list>

void reverseNum(std::list<int>& nums) {
    for (auto it = nums.begin(); it != nums.end(); ++it) {
        // Вставляем обратный элемент перед текущим
        nums.insert(it, -(*it));
    }
}

#endif //UNTITLED_LAB_6_7_H

#ifndef UNTITLED_LAB_6_9_H
#define UNTITLED_LAB_6_9_H

#pragma once
#include <list>
#include <functional> // для std::greater

void Sort(std::list<int>& nums) {
    nums.sort(std::greater<int>());
}

#endif //UNTITLED_LAB_6_9_H

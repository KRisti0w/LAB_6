#ifndef UNTITLED_LAB_6_1_H
#define UNTITLED_LAB_6_1_H

#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator first,
                                std::vector<int>::iterator last,
                                int el) {
    for (auto it = first; it != last; ++it) {
        if (*it == el) {
            return it;
        }
    }
    return last;
}

#endif //UNTITLED_LAB_6_1_H
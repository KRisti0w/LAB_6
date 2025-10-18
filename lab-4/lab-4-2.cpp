#include <vector>
#include <utility>
#include <iostream>

std::pair<float, float> minMax(const std::vector<float>& numbers) {
    if (numbers.empty()) {
        return std::make_pair(0.0f, 0.0f);
    }

    float minl = numbers[0];
    float maxl = numbers[0];

    for (size_t i = 1; i < numbers.size(); ++i) {
        if (numbers[i] < minl) minl = numbers[i];
        if (numbers[i] > maxl) maxl = numbers[i];
    }

    return std::make_pair(minl, maxl);
}

int main() {
    // Тест с обычным массивом
    std::vector<float> test0 = {1.0f, 5.0f, 2.0f, 8.0f, 3.0f};
    std::pair<float, float> result = minMax(test0);
    std::cout << "Min: " << result.first << ", Max: " << result.second << std::endl;

    // Тест с пустым массивом
    std::vector<float> test1 = {};
    std::pair<float, float> result1 = minMax(test1);
    std::cout << "Min: " << result1.first << ", Max: " << result1.second << std::endl;
    return 0;
}


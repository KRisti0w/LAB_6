#include <vector>
#include <iostream>

// Функция возвращает индекс максимального элемента в массиве
// Для пустого массива возвращает -1
int argmax(const std::vector<float>& numbers) {
    if (numbers.empty()) {
        return -1;
    }

    int max_index = 0;
    float max_value = numbers[0];

    for (int i = 1; i < numbers.size(); ++i) {
        if (numbers[i] > max_value) {
            max_value = numbers[i];
            max_index = i;
        }
    }

    return max_index;
}
int main() {
    std::vector<float> test1 = {1.0f, 5.0f, 2.0f, 8.0f, 3.0f};
    std::vector<float> test3 = {};
    std::cout << "argmax([1,5,2,8,3]) = " << argmax(test1) << std::endl;
    std::cout << "argmax([]) = " << argmax(test3) << std::endl;

    return 0;
}


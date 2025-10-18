#include <iostream>
#include <vector>

void sort(std::vector<float>& numbers) {
    size_t n = numbers.size();

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (numbers[j] < numbers[j + 1]) {
                float temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}

void printVector(const std::vector<float>& numbers, const std::string& label) {
    std::cout << label;
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<float> test1 = {3.5f, 1.2f, 4.8f, 2.1f, 5.0f};
    std::vector<float> test2 = {};


    printVector(test1, "before:    ");
    sort(test1);
    printVector(test1, "after: ");

    std::cout << std::endl;

    printVector(test2, "before:    ");
    sort(test2);
    printVector(test2, "after: ");


    return 0;
}
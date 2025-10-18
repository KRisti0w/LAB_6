#include <iostream>
#include <vector>

bool remove_first_negative_element(std::vector<int>& vec, int& removed_element) {
    for (auto i = vec.begin(); i != vec.end(); ++i) {
        if (*i < 0) {
            removed_element = *i;
            vec.erase(i);
            return true;
        }
    }

    removed_element = 0;
    return false;
}

void printVector(const std::vector<int>& vec, const std::string& label) {
    std::cout << label << ": ";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i < vec.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> test1 = {1, -2, 3, -4, 5};
    std::vector<int> test2 = {1, 2, 3, 4, 5};
    std::vector<int> test3 = {};

    int removed;


    // Есть отрицательные элементы
    printVector(test1, "before");
    bool result1 = remove_first_negative_element(test1, removed);
    printVector(test1, "after");
    std::cout << "Udalen element: " << removed << " " << std::boolalpha << result1 << std::endl;
    std::cout << std::endl;

    // Нет отрицательных элементов
    printVector(test2, "before");
    bool result2 = remove_first_negative_element(test2, removed);
    printVector(test2, "after");
    std::cout << "Udalen element: " << removed << " " << std::boolalpha << result2 << std::endl;
    std::cout << std::endl;

    // Пустой массив
    printVector(test3, "before");
    bool result3 = remove_first_negative_element(test3, removed);
    printVector(test3, "after");
    std::cout << "Udalen element: " << removed << " " << std::boolalpha << result3 << std::endl;
    std::cout << std::endl;

    return 0;
}
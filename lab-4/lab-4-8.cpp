#include <iostream>
#include <vector>
#include <string>

std::string join(const std::vector<std::string>& arr, const std::string& sep) {
    std::string result;

    if (arr.empty()) {
        return result;
    }

    result = arr[0];

    for (size_t i = 1; i < arr.size(); ++i) {
        result += sep + arr[i];
    }

    return result;
}

int main() {
    std::vector<std::string> test1 = {"Can", "you", "can", "a", "can", "as", "a", "canner", "can", "can", "a", "can?"};
    std::string result1 = join(test1, " ");
    std::cout << "Test 1: \"" << result1 << "\"" << std::endl;

    return 0;
}
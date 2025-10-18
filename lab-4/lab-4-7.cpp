#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> split(const std::string& str, char sep) {
    std::vector<std::string> result;

    if (str.empty()) {
        return result;
    }

    size_t start = 0;
    size_t end = 0;

    while (end <= str.length()) {
        if (end == str.length() || str[end] == sep) {
            if (start != end) {
                result.push_back(str.substr(start, end - start));
            }
            start = end + 1;
        }
        end++;
    }

    return result;
}

void printVector(const std::vector<std::string>& vec) {
    std::cout << "{";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << "\"" << vec[i] << "\"";
        if (i < vec.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "}" << std::endl;
}

int main() {
    std::vector<std::string> test1 = split("Can you can a can as a canner can can a can?", ' ');
    std::cout << "Test 1: "; printVector(test1);

    return 0;
}
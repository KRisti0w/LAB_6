#include <iostream>
#include <string>

std::string replace(const std::string& str, const std::string& old, const std::string& new_string) {
    std::string result = str;
    size_t pos = 0;

    while ((pos = result.find(old, pos)) != std::string::npos) {
        result.replace(pos, old.length(), new_string);
        pos += new_string.length();
    }

    return result;
}

int main() {
    std::string test1 = replace("Can you can a can as a canner can can a can?", "can", "cAN");
    std::cout << "Test 1: " << test1 << std::endl;

    return 0;
}
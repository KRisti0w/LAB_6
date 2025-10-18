#include <iostream>
#include <vector>
#include <numeric>

float mean(const std::vector<float>& numbers) {
    if (numbers.empty()) {
        return 0.0f;
    }

    float sum = std::accumulate(numbers.begin(), numbers.end(), 0.0f);
    return sum / static_cast<float>(numbers.size());
}

int main() {
    std::vector<float> data = {1.0f, 2.0f, 3.0f};
    std::cout << "arithmetic mean: " << mean(data) << std::endl;
    return 0;
}
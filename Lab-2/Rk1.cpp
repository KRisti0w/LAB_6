#include <iostream>
#include <iomanip>

long long factorial(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int m = 5;
    double sum = 0.0;

    std::cout << "Pervie " << m << " slagaemih :" << std::endl;
    std::cout << std::fixed << std::setprecision(6);

    for (int n = 1; n <= m; n++) {
        double term = 1.0 / factorial(n);
        sum += term;

        std::cout << "n = " << n << ": 1/" << n << "! = 1/" << factorial(n);
        std::cout << " = " << term << std::endl;
    }

    std::cout << "\nSum pervih " << m << " slagaemih= " << sum << std::endl;

    return ;
}
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int m, n;

    cout << "Enter the word: ";
    cin >> word;
    cout << "Enter the m: ";
    cin >> m;
    cout << "Enter the n: ";
    cin >> n;

    // Корректируем индексы (пользователь вводит с 1, а в C++ индексация с 0)
    m--; n--;

    // Проверяем корректность индексов
    if (m < 0 || n >= word.length() || m > n) {
        cout << "Error!" << endl;
        return 1;
    }

    string result = word.substr(m, n - m + 1);
    cout << "Result: " << result << endl;

    return 0;
}
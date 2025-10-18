#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string sentence;

    cout << "Enter the suggestion: ";
    getline(cin, sentence);

    int totalLetters = 0;
    int countA = 0;

    for (char c : sentence) {
        if (isalpha(c)) { // Проверяем, является ли символ буквой
            totalLetters++;
            if (tolower(c) == 'a') { // Приводим к нижнему регистру
                countA++;
            }
        }
    }

    if (totalLetters > 0) {
        double percentage = (static_cast<double>(countA) / totalLetters) * 100;
        cout << fixed << setprecision(2);
        cout << "the proportion 'a': " << percentage << "%" << endl;
    } else {
        cout << "No letters!" << endl;
    }

    return 0;
}
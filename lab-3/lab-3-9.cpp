#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;

    cout << "Enter the world: ";
    cin >> word;

    int length = word.length();
    string stars(length, '*');
    string result = stars + word + stars;

    cout << "Result: " << result << endl;

    return 0;
}
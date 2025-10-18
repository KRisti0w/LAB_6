#include <iostream>
#include <string>
using namespace std;

int main() {
    string surname1, surname2;

    cout << "First surname: ";
    getline(cin, surname1);

    cout << "Second surname: ";
    getline(cin, surname2);

    bool result = surname1.length() > surname2.length();

    cout << "First surname is longer: " << boolalpha << result << endl;

    return 0;
}
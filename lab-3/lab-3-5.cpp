#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    cout << "Name town: ";
    getline(cin, city);

    int length = city.length();

    if (length % 2 == 0) {
        cout << "Chet: " << length << endl;
    } else {
        cout << "Ne chet: " << length << endl;
    }

    return 0;
}
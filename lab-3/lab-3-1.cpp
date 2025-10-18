#include <iostream>

using namespace std;

int main() {
    int n;
    double a;

    cout << "Razmer massiva: ";
    cin >> n;

    cout << "vvedite chislo a: ";
    cin >> a;

    double arr[n];
    cout << "Vvedite elementi massiva: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    double firstElement = arr[0];

    for (int i = 0; i < n; i++) {
        arr[i] = (arr[i] * 2 - a) / firstElement;
    }

    cout << "Result: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
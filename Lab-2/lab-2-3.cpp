/*#include <iostream>
using namespace std;

int main() {
    cout << "Tablica umnogenia na 7" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << "7 * " << i << " = " << 7 * i << endl;
    }

    return 0;
}*/

#include <iostream>
using namespace std;

int main() {
    int N;

    cout << "Vvedite chislo: ";
    cin >> N;

    cout << "\nTablica umnogenia na " << N << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}

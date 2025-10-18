/*#include <iostream>
using namespace std;

int main() {
    long long product = 1;

    for (int i = 8; i <= 15; i++) {
        product *= i;
    }

    cout << "Proizvedenie chisel do 8 do 15 = " << product << endl;

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int a;

    cout << "Vvedite chislo a (1 < a < 20): ";
    cin >> a;

    if (a <= 1 || a >= 20) {
        cout << "Error: chislo a dolgno bit v diapazone 1 < a < 20" << endl;
        return 1;
    }

    long long product = 1;

    cout << "Proizvedenie chisel ot " << a << " do 20:" << endl;
    cout << a;

    for (int i = a; i <= 20; i++) {
        product *= i;
        if (i < 20) cout << " * " << i + 1;
    }

    cout << " = " << product << endl;

    return 0;
}*/



/*#include <iostream>
using namespace std;

int main() {
    int b;

    cout << "Vvedite chislo b (1 < b < 20): ";
    cin >> b;

    if (b <= 1 || b >= 20) {
        cout << "Error: chislo b dolgno bit v diapazone 1 < b < 20" << endl;
        return 1;
    }

    long long product = 1;

    cout << "Proizvedenie chisel ot 1 do " << b << ":" << endl;
    cout << "1";

    for (int i = 2; i <= b; i++) {
        product *= i;
        cout << " * " << i;
    }

    cout << " = " << product << endl;

    return 0;
}*/


#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Vvedite chislo a: ";
    cin >> a;
    cout << "Vvedite chislo b (b >= a): ";
    cin >> b;

    if (b < a) {
        cout << "Error: b dolgno bit bolshe or ravno a" << endl;
        return 1;
    }

    long long product = 1;

    cout << "Proizvedenie chisel ot " << a << " do " << b << ":" << endl;
    cout << a;

    for (int i = a + 1; i <= b; i++) {
        product *= i;
        cout << " * " << i;
    }

    if (a == b) {
        product = a;
        cout << " = " << product << endl;
    } else {
        cout << " = " << product << endl;
    }

    return 0;
}

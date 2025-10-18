#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Vvedite razmer massiva: ";
    cin >> n;

    int arr[n];

    cout << "Vvedite elementi massiva: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Сумма всех элементов массива
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum vseh elementov: " << sum << endl;

    // Вычесление квадратов всех элементов массива
    double sumSquares = 0;
    for (int i = 0; i < n; i++) {
        sumSquares += arr[i] * arr[i];
    }
    cout << "Sum kvadratov vseh elementov: " << sumSquares << endl;

    // Вычисление суммы шести первых элементов
    double sumFirstSix = 0;
    int elementSum = min(6, n);

    for (int i = 0; i < elementSum; i++) {
        sumFirstSix += arr[i];
    }

    cout << "Sum first six elementov: " << sumFirstSix << endl;


    //сумма элементов массива с k1-го по k2й
    int k1, k2;

    std::cout << "k1 and k2: ";
    std::cin >> k1 >> k2;

    if (k1 < 0 || k2 >= n || k1 > k2) {
        std::cout << "Error: nekorektno vvedeni indeksi" << std::endl;
        return 1;
    }

    int sumK = 0;
    for (int i = k1; i <= k2; i++) {
        sumK+= arr[i];
    }

    std::cout << "Summa elementov s " << k1 << " po " << k2 << " : "<< sumK << std::endl;

    //среднее арифметическое всех элементов массива

    double arif = static_cast<double>(sum) / n;
    std::cout << "Srednee arifm: " << arif << std::endl;


    //среднее арифметическое элементов массива с s1-го по s2-й.
    int s1, s2;

    std::cout << "s1 and s2: ";
    std::cin >> s1 >> s2;

    if (s1 < 0 || s2 >= n || s1 > s2) {
        std::cout << "Error: nekorektno vvedeni indeksi" << std::endl;
        return 1;
    }

    int sumS = 0;
    for (int i = s1; i <= s2; i++) {
        sumS+= arr[i];
    }

    double arifS = static_cast<double>(sumS) / (s2 - s1 + 1);

    std::cout << "Srednee arifm s " << s1 << " po " << s2 << " : "<< arifS << std::endl;
    return 0;
}



#include <iostream>
#include <string>
using namespace std;

int main() {
    string city1, city2, city3;
    string the_longest, the_shortest;

    cout << "city1: ";
    getline(cin, city1);
    cout << "city2: ";
    getline(cin, city2);
    cout << "city3: ";
    getline(cin, city3);

    // Инициализируем переменные
    the_longest = city1;
    the_shortest = city1;

    // Обновляем самый длинный
    if (city2.length() > the_longest.length()) the_longest = city2;
    if (city3.length() > the_longest.length()) the_longest = city3;

    // Обновляем самый короткий
    if (city2.length() < the_shortest.length()) the_shortest = city2;
    if (city3.length() < the_shortest.length()) the_shortest = city3;

    // Выводим все города для наглядности
    cout << "\nAll city:" << endl;
    cout << "1. '" << city1 << "' - " << city1.length() << " symbol" << endl;
    cout << "2. '" << city2 << "' - " << city2.length() << " symbol." << endl;
    cout << "3. '" << city3 << "' - " << city3.length() << " symbol." << endl;

    cout << "\nResult:" << endl;
    cout << "the_longest = \"" << the_longest << "\"" << endl;
    cout << "the_shortest = \"" << the_shortest << "\"" << endl;

    return 0;
}
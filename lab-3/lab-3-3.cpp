/*#include <iostream>

int main() {
    const int n = 20;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                     11, 12, 13, 14, 15, 16, 17, 18, 19, 20};

    std::cout << "Ishodnii massiv: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Перестановка первых трех и последних трех элементов
    for (int i = 0; i < 3; i++) {
        int k = arr[i];
        arr[i] = arr[n - 3 + i];
        arr[n - 3 + i] = k;
    }

    std::cout << "Result:      ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}*/


#include <iostream>
using namespace std;

void removeLastEvenStatic(int arr[], int& size) {
    int index = -1;

    // Ищем индекс последнего четного элемента
    for (int i = size - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            index = i;
            break;
        }
    }
    // Если нашли четный элемент, удаляем его сдвигом
    if (index != -1) {
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }
}
int main() {
    int arr[] = {8,1,8,47,9,-22};
    int size = 6;

    cout << "Do: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    removeLastEvenStatic(arr, size);

    cout << "Posle: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int x,y,z;
    cin >>x>>y>>z;
    if ((x % 2 != 0) && (y % 2 != 0)) {
        cout << "condition 1 is true" << endl;
    } else {
        cout << "condition 1 is false" << endl;
    }
    if (((x < 20) && (y >= 20)) || ((x >= 20) && (y < 20))) {
        cout << "condition 2 is true" << endl;
    } else {
        cout << "condition 2 is false" << endl;
    }
    if (x==0 || y==0) {
        cout << "condition 3 is true" << endl;
    } else {
        cout << "condition 3 is false" << endl;
    }
    if ((x<0) && (y<0) && (z<0)) {
        cout << "condition 4 is true" << endl;
    } else {
        cout << "condition 4 is false" << endl;
    }
    if (((x % 5 ==0) + (y % 5 ==0) + (z % 5 ==0)) == 1) {
        cout << "condition 5 is true" << endl;
    } else {
        cout << "condition 5 is false" << endl;
    }
    if (((x>=100) + (y>=100) + (z >=100)) >= 1) {
        cout << "condition 6 is true" << endl;
    } else {
        cout << "condition 6 is false" << endl;
    }


    return 0;
}
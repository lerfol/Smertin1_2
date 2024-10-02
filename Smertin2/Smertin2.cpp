#include <iostream>
#include <clocale>
#include <string>
using namespace std;

//#1
int abs(int x) {
    if (x > 0) {
        return x;
    }
    else {
        x += (x * (-2));
        return x;
    }
}

//#2
double safeDiv(int x, int y) {
    if (y != 0) {
        return x / y;
    }
    else {
        return 0;
    }
}

//#3
bool is35(int x) {
    if (x % 15 == 0) {
        return false;
    }
    else {
        if (x % 5 == 0 or x % 3 == 0) {
            return true;
        }
        return false;
    }
}

//#4
int max3(int x, int y, int z) {
    if (x > y && x > z) {
        return x;
    }
    if (y > x && y > z) {
        return y;
    }
    return z;
}

//#5
bool sum3(int x, int y, int z) {
    if ((x + y == z) || (x + z == y) || (y + z == x)) {
        return true;
    }
    return false;
}

int main()
{
    setlocale(LC_ALL, "rus");
    //#1
    int x;
    cout << "№1. Введите число: ";
    cin >> x;
    cout << abs(x) << endl;
    //#2
    int a, b;
    cout << "№2. Введите два числа через пробел: ";
    cin >> a >> b;
    cout << safeDiv(a, b) << endl;
    //#3
    int y;
    cout << "№3. Введите число: ";
    cin >> y;
    cout << is35(y) << endl;
    //#4
    int q, w, e;
    cout << "№4. Введите три числа: ";
    cin >> q >> w >> e;
    cout << max3(q, w, e) << endl;
    //#5
    int k, l, p;
    cout << "№5. Введите три числа: ";
    cin >> k >> l >> p;
    cout << sum3(k, l, p) << endl;
}


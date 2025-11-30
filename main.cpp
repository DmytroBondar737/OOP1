#include "Fraction.h"
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    try {
        Fraction f1(7, 3);
        f1.display();

        Fraction f2(10, 5);
        f2.display();

        Fraction f3(15, 4);
        f3.display();

    }
    catch (const exception& e) {
        cout << "Помилка: " << e.what() << endl;
    }
    return 0;
}

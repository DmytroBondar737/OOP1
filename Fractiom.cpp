#include "Fraction.h"

Fraction::Fraction(int num, int den) {
    if (den == 0) throw invalid_argument("Знаменник не може бути нулем");
    if (num <= 0 || den <= 0) throw invalid_argument("Чисельник і знаменник повинні бути додатніми");
    first = num;
    second = den;
}

int Fraction::ipart() const {
    if (second == 0) throw runtime_error("Ділення на нуль");
    return first / second;
}

void Fraction::display() const {
    cout << "Дріб " << first << "/" << second << " - ціла частина: " << ipart() << endl;
}

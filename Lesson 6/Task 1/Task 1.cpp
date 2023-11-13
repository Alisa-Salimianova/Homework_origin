#include <iostream>
#include <string>
#include <cmath>
#include "func.hpp"


int main() {
    std::cout << "Введите первое число: ";
    int a;
    std::cin >> a;

    std::cout << "Введите второе число: ";
    int b;
    std::cin >> b;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    int c;
    std::cin >> c;

    if (c == 1) {
        std::cout << a << " плюс " << b << " равно " << add(a, b) << std::endl;
    }
    if (c == 2) {
        std::cout << a << " минус " << b << " равно " << substract(a, b) << std::endl;
    }
    if (c == 3) {
        std::cout << a << " умножить на " << b << " равно " << mult(a, b) << std::endl;
    }
    if (c == 4) {
        std::cout << a << " разделить на " << b << " равно " << division(a, b) << std::endl;
    }
    if (c == 5) {
        std::cout << a << " в степени " << b << " равно " << pow(a, b) << std::endl;
    }
    if (c < 1 || c>5) {
        std::cout << "Ошибка! Неверный номер операции." << std::endl;
    }
    return 0;
}
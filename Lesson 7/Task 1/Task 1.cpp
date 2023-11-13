#include <iostream>
#include <string>
#include <cmath>


int add(int a, int b) {
    return a + b;
}

#define MODE 1



int main() {
#ifndef MODE
#error Need to define MODE!
#endif

#ifdef MODE

#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << std::endl;

    std::cout << "Введите число 1: ";
    int num1;
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    int num2;
    std::cin >> num2;

    std::cout << "Результат сложения: " << add(num1, num2);

#else 
    std::cout << "«Неизвестный режим. Завершение работы»";
#endif
#endif
    return 0;

}

#include <iostream>
#include <string>
#include "counter.hpp"

int main() {
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string answer;
    std::cin >> answer;

    if (answer == "да") {
        std::cout << "Введите число: ";
        int a;
        std::cin >> a;
        Counter myCustomCounter(a);
        char command = 0;
        myCustomCounter.calculation(myCustomCounter, command);
    }

    if (answer == "нет") {
        Counter myCounter;
        char command = 0;
        myCounter.calculation(myCounter, command);
    }

    if (answer != "да" && answer != "нет") {
        std::cout << "Вы что-то не то ввели!" << std::endl;
    }

    return 0;
}
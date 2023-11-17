#include "exceptions.hpp"
#include "figure.hpp"
#include <iostream>


void param(int x) {

    if (x == 180) {
        std::cout << "Создан" << std::endl;

    }
    else {
        throw std::domain_error("Ошибка создания фигуры.");
    }
}

int main() {

    try {
        param(180);
    }
    catch (std::domain_error e) {
        std::cout << e.what() << std::endl;
    }
    return 0;

}
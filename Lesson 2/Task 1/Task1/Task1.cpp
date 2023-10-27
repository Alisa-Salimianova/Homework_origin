#include <iostream>
#include <string>


enum class Months {
    Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main() {
    setlocale(0, "");
    int number;
    do {
        std::cout << "Введите номер месяца: ";

        std::cin >> number;

        if (number < 0 || number > 12) {
            std::cout << "\n Неверный номер месяца!" << std::endl;
        }
        else {
            Months month = static_cast<Months>(number);

            switch (month) {
            case Months::Jan: std::cout << "\n Январь" << std::endl; break;
            case Months::Feb: std::cout << "\n Февраль" << std::endl; break;
            case Months::Mar: std::cout << "\n Март" << std::endl; break;
            case Months::Apr: std::cout << "\n Апрель" << std::endl; break;
            case Months::May: std::cout << "\n Май" << std::endl; break;
            case Months::Jun: std::cout << "\n Июнь" << std::endl; break;
            case Months::Jul: std::cout << "\n Июль" << std::endl; break;
            case Months::Aug: std::cout << "\n Август" << std::endl; break;
            case Months::Sep: std::cout << "\n Сентябрь" << std::endl; break;
            case Months::Oct: std::cout << "\n Октябрь" << std::endl; break;
            case Months::Nov: std::cout << "\n Ноябрь" << std::endl; break;
            case Months::Dec: std::cout << "\n Декабрь" << std::endl; break;
            }
        }
    } while (number != 0);
    if (number == 0) {
        std::cout << "\n До свидания!";
    }
}
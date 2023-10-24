#include <iostream>
#include <string>


enum class Months {
 Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main() {
  std::cout << "Введите номер месяца: ";
  int number;
  std::cin >> number;
  if (number == 0) {
    std::cout << "\n До свидания!";
  }
  else if (number <0 || number > 12) {
    std::cout << "\n Неверный номер месяца!";
  }
  else {
  Months month = static_cast<Months>(number);
  
  switch (month) {
    case Months::Jan: std::cout <<"\n Январь"; break;
    case Months::Feb: std::cout <<"\n Февраль"; break;
    case Months::Mar: std::cout <<"\n Март"; break;
    case Months::Apr: std::cout <<"\n Апрель"; break;
    case Months::May: std::cout <<"\n Май"; break;
    case Months::Jun: std::cout <<"\n Июнь"; break;
    case Months::Jul: std::cout <<"\n Июль"; break;
    case Months::Aug: std::cout <<"\n Август"; break;
    case Months::Sep: std::cout <<"\n Сентябрь"; break;
    case Months::Oct: std::cout <<"\n Октябрь"; break;
    case Months::Nov: std::cout <<"\n Ноябрь"; break;
    case Months::Dec: std::cout <<"\n Декабрь"; break;
    }
  }  
  
}
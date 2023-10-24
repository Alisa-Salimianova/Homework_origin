#include <iostream>
#include <string>

struct Person {
  int account_num;
  std::string name;
  double balance;
  double balance_new;
};

void print_person (Person& p){
  p.balance = p.balance_new;
  std::cout << "Ваш счёт: " << p.name << ", " << p.account_num << ", " << p.balance << std::endl;
}

int main() {
  Person user;
  std::cout << "Введите номер счета: ";
  std::cin >> user.account_num;
  std::cout << "Введите имя владельца: ";
  std::cin >> user.name;
  std::cout << "Введите баланс: ";
  std::cin >> user.balance;
  std::cout << "Введите новый баланс: ";
  std::cin >> user.balance_new;
  
  print_person (user);
  
}
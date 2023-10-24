#include <iostream>
#include <string>

struct Address {
std::string city;
std::string street;
int house;
int apt;
int zip;
};

void print_address(Address& address){
 std::cout << "Город: " << address.city << '\n' << "Улица: " << address.street << '\n' <<"Номер дома: " << address.house << '\n' << "Номер квартиры: "<< address.apt << '\n' << "Индекс: " << address.zip << '\n' << std::endl;  
}

int main() {
  Address adr1 = {"Москва", "Новый Арбат", 12, 234, 145455};
  Address adr2 = {"Санкт-Петербург", "Невский проспект", 8, 37, 187015};
  Address adr3 = {"Сочи", "Ленина", 7, 5, 354008};

  print_address (adr1);
  print_address (adr2);
  print_address (adr3);
  
}
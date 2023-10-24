#include <iostream>
#include <string>

class Calculator {
private:
  double num1;
  double num2;
  double Res = 0;

public:
bool set_num1(double num1){
  if (num1!=0){
  this->num1 = num1;
  return true;
  } else {
    return false;
    } 
  }

bool set_num2(double num2){
  if (num2!=0){
  this->num2 = num2;
  return true;
  } else {
    return false;
    } 
  }

void add(double num1, double num2){
  Res = num1 + num2;
}

void mult(double num1, double num2){
  Res = num1 * num2;
}

void substr_1_2(double num1, double num2){
  Res = num2 - num1;
}

void substr_2_1(double num1, double num2){
  Res = num1 - num2;
}

void divide_1_2(double num1, double num2){
  Res = num1 / num2;
}

void divide_2_1(double num1, double num2){
  Res = num2 / num1;
}

double getRes() {
  return Res;
}

};

int main() {
  Calculator res;
  double a, b;
  
  do {
  
  std::cout << "Введите num1: ";
  std::cin >> a;
  std::cout << "Введите num2: ";
  std::cin >> b;
  
  if (res.set_num1(a)==false && res.set_num2(b)) {
    std::cout << "Неверный ввод первого!\n Введите num1 (в цикле): ";
    std::cin >> a;
  }
    

  else if (res.set_num1(a) && res.set_num2(b)==false)  {
    std::cout << "Неверный ввод второго!\n Введите num2 (в цикле): ";
    std::cin >> b;
  } 

  else if (res.set_num1(a)==false && res.set_num2(b)==false) {
    std::cout << "Оба числа неверные \n";
  }  
       
  } while (res.set_num1(a)*res.set_num2(b)==false); 

  if (res.set_num1(a) && res.set_num2(b)) { 
  res.add(a, b);
   std::cout << "num1 + num2 = " << res.getRes() << std::endl;
  res.mult(a, b);
   std::cout << "num1 * num2 = " << res.getRes() <<std::endl;
  res.substr_1_2(a, b);
   std::cout << "num1 - num2 = " << res.getRes() <<std::endl;
  res.substr_2_1(a, b);
   std::cout << "num2 - num1 = " << res.getRes() <<std::endl;
  res.divide_1_2(a, b);
   std::cout << "num1 / num2 = " << res.getRes() <<std::endl;
  res.divide_2_1(a, b);
   std::cout << "num2 / num1 = " << res.getRes() <<std::endl;  
  }

  return 0;
  
}

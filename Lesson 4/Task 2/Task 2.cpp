#include <iostream>
#include <ostream>
#include <fstream>
#include <string>
#include <string.h>


class Address {
private:
    std::string city;
    std::string street;
    int house;
    int apartment;


public:
    Address(std::string city, std::string street, int house, int apartment) {
        this->city = city;
        this->street = street;
        this->house = house;
        this->apartment = apartment;
    };

    void setCity(std::string newCity) {
        city = newCity;
    };

    void setStreet(std::string newStreet) {
        street = newStreet;
    };

    void setHouse(int newHouse) {
        house = newHouse;
    };

    void setApartment(int newApartment) {
        apartment = newApartment;
    };

    std::string getCity() {
        return city;
    };


    std::string get_output_address() {
        return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(apartment);
    }
};

void reverse(std::string* arr, int size) {
    for (int i = 0; i <= size / 2; i++) {
        std::swap(arr[i], arr[size - i - 1]);
    }
}

// void sort(Address** a, int size) {
//   for(int i = 0; i < size - 1; i++) {
//     for(int j = i + 1; j < size; j++) {
//       if(a[i]->getCity() > a[j]->getCity()) {
//         Address* tmp = a[i];
//         a[i] = a[j];
//         a[j] = tmp;
//       }
//     }
//   }
// } - выдает ошибку

void sort(std::string* a, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {
                std::string tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int main() {

    std::ifstream file;
    file.open("in.txt");
    if (!file.is_open()) {
        std::cout << "File has not been found!" << std::endl;
    }


    std::string str;
    file >> str;
    int size = stoi(str);

    // Address* list = new Address[size](); - выдало ошибку. В интернете нашла решение с применением вектора. Но мы еще не изучали вектор. Поэтому объявила через std::string и инициализировала объекты через конструктор
    //Address** list_main = new Address*[size](); - тоже выдает ошибку


    std::string* list = new std::string[size]();
    Address one(str, str, stoi(str), stoi(str));


    for (int i = 0; i < size; i++) {
        std::string str_1;
        file >> str_1;

        one.setCity(str_1);

        file >> str_1;
        one.setStreet(str_1);

        file >> str_1;
        one.setHouse(stoi(str_1));

        file >> str_1;
        one.setApartment(stoi(str_1));
        list[i] = one.get_output_address();
    }


    // Проверка на правильность вывода на консоли
    // sort (list, size);
    // for (int i = 0; i < size; i++) {
    //   std::cout << list[i] << std::endl;
    // }  

    file.close();

    std::ofstream file_new("out.txt");

    if (!file_new.is_open()) {
        std::cout << "Failed to create the file!" << std::endl;
    }
    else {
        file_new << size << '\n';

        sort(list, size);

        for (int i = 0; i < size; i++) {
            file_new << list[i] << '\n';
        }
    }

    delete[] list;

    file_new.close();
}
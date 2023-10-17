#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <cstdlib>


void shift_left(int* a, int n) {
    if (0 == n)
        return;
    int first = a[0];

    for (int i = 1; i < n; ++i)
        a[i - 1] = a[i];

    a[n - 1] = first;
}

void shift_right(int* a, int n) {
    if (0 == n)
        return;
    int first = a[n - 1];

    for (int i = n - 1; i >= 0; --i)
        a[i + 1] = a[i];

    a[0] = first;

}

int main(int argc, char** argv) {
    std::ifstream file;
    file.open("C:/Users/somma/OneDrive/Desktop/Homework/Lesson 1/Task 1/in.txt"); 
    if (!file.is_open()) {
        std::cout << "File has not been found!" << std::endl;
    }


    std::string str;
    file >> str;
    int size = stoi(str);
    int* arr_N = new int[size]();

    for (int i = 0; i < size; i++) {
        std::string str_1;
        file >> str_1;
        int x = stoi(str_1);
        arr_N[i] = x;
    }

    file >> str;
    int size_2 = stoi(str);
    int* arr_M = new int[size]();

    for (int i = 0; i < size_2; i++) {
        std::string str_1;
        file >> str_1;
        int x = stoi(str_1);
        arr_M[i] = x;
    }

    file.close();

    std::ofstream file_new("C:/Users/somma/OneDrive/Desktop/Homework/Lesson 1/Task 1/out.txt");

    if (!file_new.is_open()) {
        std::cout << "Failed to create the file!" << std::endl;
    }
    else {
        file_new << size_2 << '\n';

        shift_right(arr_M, size_2);

        for (int i = 0; i < size_2; i++) {
          file_new << arr_M[i] << ' ';
        } 
        
        file_new << '\n';

        file_new << size << '\n';

        shift_left(arr_N, size);

        for (int i = 0; i < size; i++) {
            file_new << arr_N[i] << ' ';
        }
    }
    delete[] arr_M;
    delete[] arr_N;
    file_new.close();
}

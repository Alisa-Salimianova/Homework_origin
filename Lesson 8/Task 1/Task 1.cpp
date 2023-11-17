#include <iostream>

int function(std::string str, int forbidden_length) {
    int length = str.length();
    if (length == forbidden_length) {
        throw std::length_error("Вы ввели слово запретной длины! До свидания");
    } return length;
}

int main() {

    std::cout << "Введите запретную длину: ";
    int forbidden_length;
    std::cin >> forbidden_length;
    std::string word;
    do {
        std::cout << "Введите слово: ";
        std::cin >> word;

        std::cout << "Длина слова " << word << " равна " << function(word, forbidden_length) << std::endl;

        try {
            function(word, forbidden_length);
        }
        catch (std::length_error e) {
            std::cout << e.what() << std::endl;
        }
    } while (word.length() != forbidden_length);

    return 0;

}

#include <iostream>
#include <string>

class Counter {
private:
    int count;
public:
    Counter(int count) {
        this->count = count;
    }

    Counter() {
        this->count = 1;
    }

    void incr(Counter& a) {
        a.count++;
    }

    void decr(Counter& a) {
        a.count--;
    }

    void remain(Counter& a) {
        a.count = a.count;
    }

    void calculation(Counter& a, char b) {
        do {
            std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
            std::cin >> b;

            switch (b) {
            case '+':a.incr(a); break;
            case '-':a.decr(a); break;
            case '=':a.remain(a);  std::cout << '\n' << a.getCount() << std::endl; break;
            }
        } while (b != 'x');

        if (b == 'x') {
            std::cout << "До свидания!";
        }
    }

    int getCount() const {
        return count;
    }
};

std::ostream& operator<<(std::ostream& os, const Counter& counter) {
    os << counter.getCount();
    return os;
}

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
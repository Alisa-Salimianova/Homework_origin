#include <iostream>
#include "counter.hpp"

Counter::Counter(int count) {
    this->count = count;
};

Counter::Counter() {
    this->count = 1;
};

void Counter::incr(Counter& a) {
    a.count++;
}

void Counter::decr(Counter& a) {
    a.count--;
}

void Counter::remain(Counter& a) {
    a.count = a.count;
}

void Counter::calculation(Counter& a, char b) {
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

int Counter::getCount() const {
    return count;
}

std::ostream& operator<<(std::ostream& os, const Counter& counter) {
    os << counter.getCount();
    return os;
}

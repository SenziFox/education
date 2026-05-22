// lb6_18.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

class intNumber {
private:
    int _value;
public:
    intNumber();
    intNumber(int value);
    ~intNumber();

    void setValue(int value);
    int  getValue() const;

    void printObj() const;

    intNumber operator+(const intNumber& other) const;
    intNumber operator-(const intNumber& other) const;
};

intNumber::intNumber() : _value(0) {
    std::cout << "Конструктор по умолчанию, value = " << _value << std::endl;
}

intNumber::intNumber(int value) : _value(value) {
    std::cout << "Конструктор с параметрами, value = " << _value << std::endl;
}

intNumber::~intNumber() {
    std::cout << "Деструктор, value = " << _value << std::endl;
}

void intNumber::setValue(int value) {
    _value = value;
}

int intNumber::getValue() const {
    return _value;
}

void intNumber::printObj() const {
    std::cout << "value: " << _value << std::endl;
}

intNumber intNumber::operator+(const intNumber& other) const {
    return intNumber(_value + other._value);
}

intNumber intNumber::operator-(const intNumber& other) const {
    return intNumber(_value - other._value);
}

int main() {
    intNumber a(10);
    intNumber b(3);

    std::cout << "\na: "; a.printObj();
    std::cout << "b: "; b.printObj();

    std::cout << std::endl;
    intNumber c = a + b;
    std::cout << "a + b: "; c.printObj();

    std::cout << std::endl;
    intNumber d = a - b;
    std::cout << "a - b: "; d.printObj();

    std::cout << "\nset a = 50" << std::endl;
    a.setValue(50);
    std::cout << "get a: " << a.getValue() << std::endl;

    std::cout << std::endl;
    return 0;
}
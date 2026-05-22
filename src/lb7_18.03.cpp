// lb7_18.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

class intNumberFriend {
private:
    int _value;
public:
    intNumberFriend();
    intNumberFriend(int value);
    ~intNumberFriend();

    void setValue(int value);
    int  getValue() const;
    void printObj() const;

    friend intNumberFriend operator+(const intNumberFriend& a, const intNumberFriend& b);
    friend intNumberFriend operator-(const intNumberFriend& a, const intNumberFriend& b);
};

intNumberFriend::intNumberFriend() : _value(0) {
    std::cout << "Конструктор по умолчанию, value = " << _value << std::endl;
}
intNumberFriend::intNumberFriend(int value) : _value(value) {
    std::cout << "Конструктор с параметрами, value = " << _value << std::endl;
}
intNumberFriend::~intNumberFriend() {
    std::cout << "Деструктор, value = " << _value << std::endl;
}
void intNumberFriend::setValue(int value) { _value = value; }
int  intNumberFriend::getValue() const    { return _value;  }
void intNumberFriend::printObj() const    { std::cout << "value: " << _value << std::endl; }

intNumberFriend operator+(const intNumberFriend& a, const intNumberFriend& b) {
    return intNumberFriend(a._value + b._value);
}
intNumberFriend operator-(const intNumberFriend& a, const intNumberFriend& b) {
    return intNumberFriend(a._value - b._value);
}

class intNumberFree {
private:
    int _value;
public:
    intNumberFree();
    intNumberFree(int value);
    ~intNumberFree();

    void setValue(int value);
    int  getValue() const;
    void printObj() const;
};

intNumberFree::intNumberFree() : _value(0) {
    std::cout << "Конструктор по умолчанию, value = " << _value << std::endl;
}
intNumberFree::intNumberFree(int value) : _value(value) {
    std::cout << "Конструктор с параметрами, value = " << _value << std::endl;
}
intNumberFree::~intNumberFree() {
    std::cout << "Деструктор, value = " << _value << std::endl;
}
void intNumberFree::setValue(int value) { _value = value; }
int  intNumberFree::getValue() const    { return _value;  }
void intNumberFree::printObj() const    { std::cout << "value: " << _value << std::endl; }

intNumberFree operator+(const intNumberFree& a, const intNumberFree& b) {
    return intNumberFree(a.getValue() + b.getValue());
}
intNumberFree operator-(const intNumberFree& a, const intNumberFree& b) {
    return intNumberFree(a.getValue() - b.getValue());
}


int main() {
    std::cout << "Дружественные функции" << std::endl;

    intNumberFriend a(10);
    intNumberFriend b(3);

    std::cout << "\na: "; a.printObj();
    std::cout << "b: "; b.printObj();

    std::cout << std::endl;
    intNumberFriend c = a + b;
    std::cout << "a + b: "; c.printObj();

    std::cout << std::endl;
    intNumberFriend d = a - b;
    std::cout << "a - b: "; d.printObj();

    std::cout << "\nОбычные функции" << std::endl;

    intNumberFree e(10);
    intNumberFree f(3);

    std::cout << "\ne: "; e.printObj();
    std::cout << "f: "; f.printObj();

    std::cout << std::endl;
    intNumberFree g = e + f;
    std::cout << "e + f: "; g.printObj();

    std::cout << std::endl;
    intNumberFree h = e - f;
    std::cout << "e - f: "; h.printObj();

    std::cout << std::endl;
    return 0;
}
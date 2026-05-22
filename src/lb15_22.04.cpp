// lb15_22.04.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>
#include <string>

template <typename T>
class wrapperClass {
private:
    T _value;
public:
    wrapperClass();
    wrapperClass(T value);

    void setValue(T value);
    T getValue() const;

    void printObj() const;
};

template <typename T>
wrapperClass<T>::wrapperClass() : _value(T()) {}

template <typename T>
wrapperClass<T>::wrapperClass(T value) : _value(value) {}

template <typename T>
void wrapperClass<T>::setValue(T value) {
    _value = value;
}

template <typename T>
T wrapperClass<T>::getValue() const {
    return _value;
}

template <typename T>
void wrapperClass<T>::printObj() const {
    std::cout << "value: " << _value << std::endl;
}

int main() {
    wrapperClass<int> w1(42);
    std::cout << "int wrapper:" << std::endl;
    w1.printObj();

    wrapperClass<double> w2(3.14);
    std::cout << "\ndouble wrapper:" << std::endl;
    w2.printObj();

    wrapperClass<std::string> w3("hello");
    std::cout << "\nstring wrapper:" << std::endl;
    w3.printObj();

    w1.setValue(100);
    std::cout << "\nw1 после setValue:" << std::endl;
    w1.printObj();

    std::cout << "\ngetValue w2: " << w2.getValue() << std::endl;

    return 0;
}
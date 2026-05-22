// lb14_20.04.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>
#include <string>

void printData(int value) {
    std::cout << "int: " << value << std::endl;
}

void printData(double value) {
    std::cout << "double: " << value << std::endl;
}

void printData(std::string value) {
    std::cout << "string: " << value << std::endl;
}

template <typename T>
void printDataT(T value) {
    std::cout << "value: " << value << std::endl;
}

template <typename T>
void swapData(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
T addData(T a, T b) {
    return a + b;
}

template <>
std::string addData<std::string>(std::string a, std::string b) {
    return a + " " + b;
}


int main() {
    std::cout << "Перегруженные функции" << std::endl;
    printData(42);
    printData(3.14);
    printData(std::string("hello"));

    std::cout << "\nЩаблонная функция вывода" << std::endl;
    printDataT(42);
    printDataT(3.14);
    printDataT(std::string("hello"));

    std::cout << "\nПерестановка" << std::endl;
    int x = 10, y = 20;
    std::cout << "до: x=" << x << " y=" << y << std::endl;
    swapData(x, y);
    std::cout << "после: x=" << x << " y=" << y << std::endl;

    double a = 1.1, b = 2.2;
    std::cout << "до: a=" << a << " b=" << b << std::endl;
    swapData(a, b);
    std::cout << "после: a=" << a << " b=" << b << std::endl;

    std::cout << "\nСложение" << std::endl;
    std::cout << "int: " << addData(3, 5) << std::endl;
    std::cout << "double: " << addData(1.5, 2.5) << std::endl;
    std::cout << "string: " << addData(std::string("hello"), std::string("world")) << std::endl;

    return 0;
}
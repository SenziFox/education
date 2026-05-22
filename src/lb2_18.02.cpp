// lb2_18.02.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

class rectClassA {
private:
    int _width;
    int _height;
public:
    rectClassA();
    rectClassA(int width, int height);

    void setWidth(int width);
    void setHeight(int height);
    int getWidth() const;
    int getHeight() const;

    void printObj() const;
};

rectClassA::rectClassA() {
    _width = 0;
    _height = 0;
}

rectClassA::rectClassA(int width, int height) {
    _width = width;
    _height = height;
}

void rectClassA::setWidth(int width) { _width = width; }
void rectClassA::setHeight(int height) { _height = height; }
int rectClassA::getWidth() const { return _width; }
int rectClassA::getHeight() const { return _height; }

void rectClassA::printObj() const {
    std::cout << "width : " << _width << std::endl;
    std::cout << "height: " << _height << std::endl;
}

class rectClassB {
private:
    int _width;
    int _height;
public:
    rectClassB();
    rectClassB(int width, int height);

    void setWidth(int width);
    void setHeight(int height);
    int getWidth() const;
    int getHeight() const;

    void printObj() const;
};

rectClassB::rectClassB() : _width(0), _height(0) {}

rectClassB::rectClassB(int width, int height) : _width(width), _height(height) {}

void rectClassB::setWidth(int width) { _width = width; }
void rectClassB::setHeight(int height) { _height = height; }
int rectClassB::getWidth() const { return _width; }
int rectClassB::getHeight() const { return _height; }

void rectClassB::printObj() const {
    std::cout << "width : " << _width << std::endl;
    std::cout << "height: " << _height << std::endl;
}


int main() {
    std::cout << "Обычный конструктор";

    rectClassA a1;
    std::cout << "\na1 (по умолчанию):" << std::endl;
    a1.printObj();

    rectClassA a2(5, 3);
    std::cout << "\na2 (с параметрами):" << std::endl;
    a2.printObj();

    std::cout << "\nСписок инициализации";

    rectClassB b1;
    std::cout << "\nb1 (по умолчанию):" << std::endl;
    b1.printObj();

    rectClassB b2(5, 3);
    std::cout << "\nb2 (с параметрами):" << std::endl;
    b2.printObj();

    return 0;
}
// lb3_18.02.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

class rectClass {
private:
    int _width;
    int _height;
public:
    rectClass();
    rectClass(int width, int height);

    void setWidth(int width);
    void setHeight(int height);
    int getWidth() const;
    int getHeight() const;

    void printObj() const;
};

rectClass::rectClass() : _width(0), _height(0) {}

rectClass::rectClass(int width, int height) : _width(width), _height(height) {}

void rectClass::setWidth(int width) { _width = width; }
void rectClass::setHeight(int height) { _height = height; }
int rectClass::getWidth() const { return _width; }
int rectClass::getHeight() const { return _height; }

void rectClass::printObj() const {
    std::cout << "width : " << _width << std::endl;
    std::cout << "height: " << _height << std::endl;
}

int main() {
    rectClass r1;
    std::cout << "r1 (по умолчанию):" << std::endl;
    r1.printObj();

    rectClass r2(8, 4);
    std::cout << "\nr2 (с параметрами):" << std::endl;
    r2.printObj();

    r1.setWidth(5);
    r1.setHeight(3);
    std::cout << "\nr1 после set:" << std::endl;
    r1.printObj();

    std::cout << "width : " << r2.getWidth() << std::endl;
    std::cout << "height: " << r2.getHeight() << std::endl;

    return 0;
}
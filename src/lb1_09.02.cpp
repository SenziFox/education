// lb1_09.02.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

struct rectStruct {
    int width;
    int height;
};

int perimeterStruct(rectStruct r) {
    return 2 * (r.width + r.height);
}

int areaStruct(rectStruct r) {
    return r.width * r.height;
}

void printStruct(rectStruct r) {
    std::cout << "width: " << r.width << std::endl;
    std::cout << "height: " << r.height << std::endl;
    std::cout << "area: " << areaStruct(r) << std::endl;
    std::cout << "p: " << perimeterStruct(r) << std::endl;
}

class rectClass {
private:
    int _width;
    int _height;
public:
    void setWidth(int width);
    void setHeight(int height);
    int getWidth() const;
    int getHeight() const;
};

void rectClass::setWidth(int width) { _width = width; }
void rectClass::setHeight(int height) { _height = height; }
int rectClass::getWidth() const { return _width; }
int rectClass::getHeight() const { return _height; }


int main() {
    rectStruct r1 = {4, 3};
    rectStruct r2 = {10, 5};
    rectStruct r3 = {7, 2};

    std::cout << "r1:" << std::endl;
    printStruct(r1);

    std::cout << "\nr2:" << std::endl;
    printStruct(r2);

    std::cout << "\nr3:" << std::endl;
    printStruct(r3);

    rectClass rc;
    rc.setWidth(6);
    rc.setHeight(4);

    std::cout << "\nrectClass:" << std::endl;
    std::cout << "width : " << rc.getWidth() << std::endl;
    std::cout << "height: " << rc.getHeight() << std::endl;

    return 0;
}
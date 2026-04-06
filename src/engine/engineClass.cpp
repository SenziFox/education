#include <iostream>

class baseEngineClass {
private:
    int _speed;
    int _power;

public:
    baseEngineClass();
    baseEngineClass(int speed, int power);

    void setSpeed(int speed);
    int getSpeed() const;

    void setPower(int power);
    int getPower() const;
    
    void printObj() const;
};

baseEngineClass::baseEngineClass() : _speed(0), _power(0) {
    std::cout << "Конструктор базового класса по умолчанию" << std::endl;
}

baseEngineClass::baseEngineClass(int speed, int power) : _speed(speed), _power(power) {
    std::cout << "Конструктор базового класса с параметрами" << std::endl;
}

void baseEngineClass::setSpeed(int speed) {
    _speed = speed;
}

int baseEngineClass::getSpeed() const {
    return _speed;
}

void baseEngineClass::setPower(int power) {
    _power = power;
}

int baseEngineClass::getPower() const {
    return _power;
}

void baseEngineClass::printObj() const {
    std::cout << "Speed: " << _speed << ", Power: " << _power << std::endl;
}
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

std::ostream& operator<<(std::ostream& os, const baseEngineClass& obj) {
    os << " Speed=" << obj.getSpeed() << " Power=" << obj.getPower();
    return os;
}

baseEngineClass::baseEngineClass() : _speed(0), _power(0) {
    std::cout << std::endl << "Конструктор базового класса по умолчанию" << std::endl;
}

baseEngineClass::baseEngineClass(int speed, int power) : _speed(speed), _power(power) {
    std::cout << std::endl << "Конструктор базового класса с параметрами" << std::endl;
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
    std::cout << *this << std::endl;
}

class busClass : public baseEngineClass {
private:
    int _pass;

public:
    busClass();
    busClass(int pass);

    void setPass(int pass);
    int getPass() const;
    
    void printObj() const;
};

std::ostream& operator<<(std::ostream& os, const busClass& obj) {
    os << static_cast<const baseEngineClass&>(obj)
       << " Passengers=" << obj.getPass();
    return os;
}

busClass::busClass() : baseEngineClass(), _pass(0) {
    std::cout << "Конструктор класса автобуса по умолчанию" << std::endl;
}

busClass::busClass(int pass) : baseEngineClass(), _pass(pass) {
    std::cout << "Конструктор класса автобуса с параметрами" << std::endl;
}

void busClass::setPass(int pass) {
    _pass = pass;
}

int busClass::getPass() const {
    return _pass;
}

void busClass::printObj() const {
    std::cout << *this << std::endl;
}

class cargoClass : public baseEngineClass {
private:
    int _weight;
    
public:
    cargoClass();
    cargoClass(int weight);

    void setWeight(int weight);
    int getWeight() const;

    void printObj() const;
};

std::ostream& operator<<(std::ostream& os, const cargoClass& obj) {
    os << static_cast<const baseEngineClass&>(obj)
       << " Weight=" << obj.getWeight();
    return os;
}

cargoClass::cargoClass() : baseEngineClass(), _weight(0) {
    std::cout << "Конструктор класса грузовика по умолчанию" << std::endl;
}

cargoClass::cargoClass(int weight) : baseEngineClass(), _weight(weight) {
    std::cout << "Конструктор класса грузовика с параметрами" << std::endl;
}

void cargoClass::setWeight(int weight) {
    _weight = weight;
}

int cargoClass::getWeight() const {
    return _weight;
}

void cargoClass::printObj() const {
    std::cout << *this << std::endl;
}

int main() {
    baseEngineClass myEngine1(150, 300);
    std::cout << myEngine1 << std::endl;

    baseEngineClass myEngine2;
    myEngine2.setSpeed(120);
    myEngine2.setPower(250);
    std::cout << myEngine2 << std::endl;

    busClass myBus1(50);
    myBus1.setSpeed(100);
    myBus1.setPower(200);
    std::cout << myBus1 << std::endl;

    busClass myBus2;
    myBus2.setPass(40);
    myBus2.setSpeed(80);
    myBus2.setPower(150);
    std::cout << myBus2 << std::endl;

    cargoClass myCargo1(100);
    myCargo1.setSpeed(90);
    myCargo1.setPower(180);
    std::cout << myCargo1 << std::endl;

    cargoClass myCargo2;
    myCargo2.setSpeed(70);
    myCargo2.setPower(120);
    myCargo2.setWeight(200);
    std::cout << myCargo2 << std::endl;
    return 0;
}
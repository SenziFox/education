#include "engineClass.cpp"

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
    baseEngineClass::printObj();
    std::cout << "Passengers: " << _pass << std::endl;
}
#include "engineClass.cpp"

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
    baseEngineClass::printObj();
    std::cout << "Weight: " << _weight << std::endl;
}
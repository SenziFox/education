#include <iostream>

template <typename myType>
class myClass {
private:
    myType _value;
public:
    myClass();
    myClass(myType value);
    void setData(myType value);
    void printData();
    template <typename U>
    friend std::ostream& operator<<(std::ostream& os, const myClass<U>& obj);
};

template <typename myType>
myClass<myType>::myClass() {
    _value = myType();
}

template <typename myType>
myClass<myType>::myClass(myType value) {
    _value = value;
}

template <typename myType>
void myClass<myType>::setData(myType value) {
    _value = value;
}

template <typename myType>
void myClass<myType>::printData() {
    std::cout << _value << std::endl;
}

template <typename myType>
std::ostream& operator<<(std::ostream& os, const myClass<myType>& obj) {
    os << obj._value;
    return os;
}

class mySetIntClass {
private:
    int _size;
    int _data[100];
public:
    mySetIntClass() {
        _size = 0;
    };
    void pushElement(int value) {
        if (_size < 100){
            for (int i = 0; i < _size; ++i) {
                if (_data[i] == value) {
                    std::cout << "Element already exists: " << value << std::endl;
                    return;
                }
            }
            _data[_size] = value;
            _size++;
        } else {
            std::cout << "Set is full. Cannot add more elements." << std::endl;
            return;
        }   
    }
    void printElements() {
        std::cout << "Elements in the set: ";
        for (int i = 0; i < _size; ++i) {
            std::cout << _data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    myClass<int> Obj1(5);
    myClass<double> Obj2(3.14);
    myClass<std::string> Obj3("Hello, World!");

    std::cout << Obj1 << std::endl;
    std::cout << Obj2 << std::endl;
    std::cout << Obj3 << std::endl;

    Obj1.setData(10);
    Obj2.setData(6.28);
    Obj3.setData("Goodbye, World!");

    std::cout << Obj1 << std::endl;
    std::cout << Obj2 << std::endl;
    std::cout << Obj3 << std::endl;

    mySetIntClass mySet;
    mySet.pushElement(5);
    mySet.pushElement(10);
    mySet.pushElement(5);

    mySet.printElements();

    return 0;
}
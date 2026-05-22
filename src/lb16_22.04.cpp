// lb16_22.04.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

template <typename T>
class stackClass {
private:
    T* _data;
    int _size;
    int _top;
public:
    stackClass(int size);
    ~stackClass();

    void pushElement(T value);
    void popElement();
    T getElement() const;
    bool isEmpty() const;
    bool isFull() const;

    void printObj() const;
};

template <typename T>
stackClass<T>::stackClass(int size) : _size(size), _top(-1) {
    _data = new T[_size];
}

template <typename T>
stackClass<T>::~stackClass() {
    delete[] _data;
}

template <typename T>
void stackClass<T>::pushElement(T value) {
    if (isFull()) {
        std::cout << "Cтек полон" << std::endl;
        return;
    }
    _data[++_top] = value;
}

template <typename T>
void stackClass<T>::popElement() {
    if (isEmpty()) {
        std::cout << "Cтек пуст" << std::endl;
        return;
    }
    _top--;
}

template <typename T>
T stackClass<T>::getElement() const {
    if (isEmpty()) {
        std::cout << "Cтек пуст" << std::endl;
        return T();
    }
    return _data[_top];
}

template <typename T>
bool stackClass<T>::isEmpty() const {
    return _top == -1;
}

template <typename T>
bool stackClass<T>::isFull() const {
    return _top == _size - 1;
}

template <typename T>
void stackClass<T>::printObj() const {
    std::cout << "Cтек (top -> bottom): ";
    for (int i = _top; i >= 0; i--) {
        std::cout << _data[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    stackClass<int> s1(5);

    std::cout << "isEmpty: " << s1.isEmpty() << std::endl;

    s1.pushElement(10);
    s1.pushElement(20);
    s1.pushElement(30);
    s1.printObj();

    std::cout << "getElement: " << s1.getElement() << std::endl;
    std::cout << "isFull: " << s1.isFull() << std::endl;

    s1.popElement();
    std::cout << "\nПосле popElement:" << std::endl;
    s1.printObj();

    stackClass<double> s2(3);
    s2.pushElement(1.1);
    s2.pushElement(2.2);
    s2.pushElement(3.3);
    s2.pushElement(4.4);

    std::cout << "\ndouble стек:" << std::endl;
    s2.printObj();
    std::cout << "isFull: " << s2.isFull() << std::endl;

    return 0;
}
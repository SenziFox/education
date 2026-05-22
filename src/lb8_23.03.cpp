// lb8_23.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

struct point2D {
    int x;
    int y;
};

class segment {
private:
    point2D _start;
    point2D _end;
public:
    segment();
    segment(point2D start, point2D end);

    void setStart(point2D start);
    void setEnd(point2D end);
    void setStartX(int x);
    void setStartY(int y);
    void setEndX(int x);
    void setEndY(int y);

    point2D getStart() const;
    point2D getEnd() const;
    int getStartX() const;
    int getStartY() const;
    int getEndX() const;
    int getEndY() const;

    void printObj() const;
};

segment::segment() {
    _start = {0, 0};
    _end = {0, 0};
}

segment::segment(point2D start, point2D end) {
    _start = start;
    _end = end;
}

void segment::setStart(point2D start) { _start = start; }
void segment::setEnd(point2D end) { _end = end; }
void segment::setStartX(int x) { _start.x = x; }
void segment::setStartY(int y) { _start.y = y; }
void segment::setEndX(int x) { _end.x = x; }
void segment::setEndY(int y) { _end.y = y; }

point2D segment::getStart() const { return _start; }
point2D segment::getEnd() const { return _end; }
int segment::getStartX() const { return _start.x; }
int segment::getStartY() const { return _start.y; }
int segment::getEndX() const { return _end.x; }
int segment::getEndY() const { return _end.y; }

void segment::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
}

int main() {
    segment s1;
    std::cout << "Объект s1 (конструктор по умолчанию)" << std::endl;
    s1.printObj();

    point2D p1 = {1, 2};
    point2D p2 = {5, 8};
    segment s2(p1, p2);
    std::cout << "\nОбъект s2 (конструктор с параметрами)" << std::endl;
    s2.printObj();

    s2.setStartX(10);
    s2.setStartY(20);
    s2.setEndX(30);
    s2.setEndY(40);
    std::cout << "\ns2 после setX/setY" << std::endl;
    s2.printObj();

    std::cout << "\nГеттеры s2" << std::endl;
    std::cout << "startX: " << s2.getStartX() << std::endl;
    std::cout << "startY: " << s2.getStartY() << std::endl;
    std::cout << "endX  : " << s2.getEndX() << std::endl;
    std::cout << "endY  : " << s2.getEndY() << std::endl;

    return 0;
}
// lb9_25.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

struct point2D {
    int x;
    int y;
};

class segmentFriend {
private:
    point2D _start;
    point2D _end;
public:
    segmentFriend();
    segmentFriend(point2D start, point2D end);

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

    friend std::ostream& operator<<(std::ostream& out, const segmentFriend& s);
    friend std::istream& operator>>(std::istream& in, segmentFriend& s);
};

segmentFriend::segmentFriend() {
    _start = {0, 0};
    _end = {0, 0};
}
segmentFriend::segmentFriend(point2D start, point2D end) {
    _start = start;
    _end = end;
}

void segmentFriend::setStart(point2D start) { _start = start; }
void segmentFriend::setEnd(point2D end) { _end = end; }
void segmentFriend::setStartX(int x) { _start.x = x; }
void segmentFriend::setStartY(int y) { _start.y = y; }
void segmentFriend::setEndX(int x) { _end.x = x; }
void segmentFriend::setEndY(int y) { _end.y = y; }

point2D segmentFriend::getStart() const { return _start; }
point2D segmentFriend::getEnd() const { return _end; }
int segmentFriend::getStartX() const { return _start.x; }
int segmentFriend::getStartY() const { return _start.y; }
int segmentFriend::getEndX() const { return _end.x; }
int segmentFriend::getEndY() const { return _end.y; }

void segmentFriend::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const segmentFriend& s) {
    out << "start: (" << s._start.x << ", " << s._start.y << ")" << std::endl;
    out << "end  : (" << s._end.x << ", " << s._end.y << ")";
    return out;
}
std::istream& operator>>(std::istream& in, segmentFriend& s) {
    std::cout << "Введите startX startY: "; in >> s._start.x >> s._start.y;
    std::cout << "Введите endX endY: "; in >> s._end.x >> s._end.y;
    return in;
}

class segmentFree {
private:
    point2D _start;
    point2D _end;
public:
    segmentFree();
    segmentFree(point2D start, point2D end);

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

segmentFree::segmentFree() {
    _start = {0, 0};
    _end = {0, 0};
}
segmentFree::segmentFree(point2D start, point2D end) {
    _start = start;
    _end = end;
}

void segmentFree::setStart(point2D start) { _start = start; }
void segmentFree::setEnd(point2D end) { _end = end; }
void segmentFree::setStartX(int x) { _start.x = x; }
void segmentFree::setStartY(int y) { _start.y = y; }
void segmentFree::setEndX(int x) { _end.x = x; }
void segmentFree::setEndY(int y) { _end.y = y; }

point2D segmentFree::getStart() const { return _start; }
point2D segmentFree::getEnd() const { return _end; }
int segmentFree::getStartX() const { return _start.x; }
int segmentFree::getStartY() const { return _start.y; }
int segmentFree::getEndX() const { return _end.x; }
int segmentFree::getEndY() const { return _end.y; }

void segmentFree::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const segmentFree& s) {
    out << "start: (" << s.getStartX() << ", " << s.getStartY() << ")" << std::endl;
    out << "end  : (" << s.getEndX() << ", " << s.getEndY() << ")";
    return out;
}
std::istream& operator>>(std::istream& in, segmentFree& s) {
    int x1, y1, x2, y2;
    std::cout << "Введите startX startY: "; in >> x1 >> y1;
    std::cout << "Введите endX endY: "; in >> x2 >> y2;
    s.setStartX(x1); s.setStartY(y1);
    s.setEndX(x2); s.setEndY(y2);
    return in;
}


int main() {
    std::cout << "дружественные функции" << std::endl;

    point2D p1 = {1, 2};
    point2D p2 = {5, 8};
    segmentFriend s1(p1, p2);
    std::cout << s1 << std::endl;

    segmentFriend s2;
    std::cin >> s2;
    std::cout << s2 << std::endl;

    std::cout << "\nобычные функции" << std::endl;

    segmentFree s3(p1, p2);
    std::cout << s3 << std::endl;

    segmentFree s4;
    std::cin >> s4;
    std::cout << s4 << std::endl;

    return 0;
}
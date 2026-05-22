// lb10_25.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>

struct point2D {
    int x;
    int y;
};

class segmentMethod {
private:
    point2D _start;
    point2D _end;
public:
    segmentMethod();
    segmentMethod(point2D start, point2D end);

    void setStart(point2D start);
    void setEnd(point2D end);
    point2D getStart() const;
    point2D getEnd() const;

    int length2() const;
    void printObj() const;

    bool operator==(const segmentMethod& other) const;
    bool operator!=(const segmentMethod& other) const;
    bool operator<(const segmentMethod& other) const;
    bool operator>(const segmentMethod& other) const;
};

segmentMethod::segmentMethod() { _start = {0, 0}; _end = {0, 0}; }
segmentMethod::segmentMethod(point2D start, point2D end) { _start = start; _end = end; }

void segmentMethod::setStart(point2D start) { _start = start; }
void segmentMethod::setEnd(point2D end) { _end = end; }
point2D segmentMethod::getStart() const { return _start; }
point2D segmentMethod::getEnd() const { return _end; }

int segmentMethod::length2() const {
    int dx = _end.x - _start.x;
    int dy = _end.y - _start.y;
    return dx * dx + dy * dy;
}

void segmentMethod::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
    std::cout << "len^2: " << length2() << std::endl;
}

bool segmentMethod::operator==(const segmentMethod& other) const { return length2() == other.length2(); }
bool segmentMethod::operator!=(const segmentMethod& other) const { return length2() != other.length2(); }
bool segmentMethod::operator<(const segmentMethod& other) const { return length2() < other.length2(); }
bool segmentMethod::operator>(const segmentMethod& other) const { return length2() > other.length2(); }

class segmentFriend {
private:
    point2D _start;
    point2D _end;
public:
    segmentFriend();
    segmentFriend(point2D start, point2D end);

    void setStart(point2D start);
    void setEnd(point2D end);
    point2D getStart() const;
    point2D getEnd() const;

    int length2() const;
    void printObj() const;

    friend bool operator==(const segmentFriend& a, const segmentFriend& b);
    friend bool operator!=(const segmentFriend& a, const segmentFriend& b);
    friend bool operator<(const segmentFriend& a, const segmentFriend& b);
    friend bool operator>(const segmentFriend& a, const segmentFriend& b);
};

segmentFriend::segmentFriend() { _start = {0, 0}; _end = {0, 0}; }
segmentFriend::segmentFriend(point2D start, point2D end) { _start = start; _end = end; }

void segmentFriend::setStart(point2D start) { _start = start; }
void segmentFriend::setEnd(point2D end) { _end = end; }
point2D segmentFriend::getStart() const { return _start; }
point2D segmentFriend::getEnd() const { return _end; }

int segmentFriend::length2() const {
    int dx = _end.x - _start.x;
    int dy = _end.y - _start.y;
    return dx * dx + dy * dy;
}

void segmentFriend::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
    std::cout << "len^2: " << length2() << std::endl;
}

bool operator==(const segmentFriend& a, const segmentFriend& b) { return a._start.x == b._start.x && a._start.y == b._start.y && a._end.x == b._end.x && a._end.y == b._end.y; }
bool operator!=(const segmentFriend& a, const segmentFriend& b) { return !(a == b); }
bool operator<(const segmentFriend& a, const segmentFriend& b) { return a.length2() < b.length2(); }
bool operator>(const segmentFriend& a, const segmentFriend& b) { return a.length2() > b.length2(); }

class segmentFree {
private:
    point2D _start;
    point2D _end;
public:
    segmentFree();
    segmentFree(point2D start, point2D end);

    void setStart(point2D start);
    void setEnd(point2D end);
    point2D getStart() const;
    point2D getEnd() const;

    int length2() const;
    void printObj() const;
};

segmentFree::segmentFree() { _start = {0, 0}; _end = {0, 0}; }
segmentFree::segmentFree(point2D start, point2D end) { _start = start; _end = end; }

void segmentFree::setStart(point2D start) { _start = start; }
void segmentFree::setEnd(point2D end) { _end = end; }
point2D segmentFree::getStart() const { return _start; }
point2D segmentFree::getEnd() const { return _end; }

int segmentFree::length2() const {
    int dx = _end.x - _start.x;
    int dy = _end.y - _start.y;
    return dx * dx + dy * dy;
}

void segmentFree::printObj() const {
    std::cout << "start: (" << _start.x << ", " << _start.y << ")" << std::endl;
    std::cout << "end  : (" << _end.x << ", " << _end.y << ")" << std::endl;
    std::cout << "len^2: " << length2() << std::endl;
}

bool operator==(const segmentFree& a, const segmentFree& b) {
    point2D sa = a.getStart(), ea = a.getEnd();
    point2D sb = b.getStart(), eb = b.getEnd();
    return sa.x == sb.x && sa.y == sb.y && ea.x == eb.x && ea.y == eb.y;
}
bool operator!=(const segmentFree& a, const segmentFree& b) { return !(a == b); }
bool operator<(const segmentFree& a, const segmentFree& b) { return a.length2() < b.length2(); }
bool operator>(const segmentFree& a, const segmentFree& b) { return a.length2() > b.length2(); }


int main() {
    point2D p1 = {0, 0};
    point2D p2 = {3, 4};
    point2D p3 = {0, 0};
    point2D p4 = {6, 8};

    std::cout << "Методы класса" << std::endl;
    segmentMethod a(p1, p2);
    segmentMethod b(p3, p4);
    std::cout << "\na: "; a.printObj();
    std::cout << "b: "; b.printObj();
    std::cout << "\na == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a <  b: " << (a < b) << std::endl;
    std::cout << "a >  b: " << (a > b) << std::endl;

    std::cout << "\nДружественные функции" << std::endl;
    segmentFriend c(p1, p2);
    segmentFriend d(p3, p4);
    std::cout << "\nc: "; c.printObj();
    std::cout << "d: "; d.printObj();
    std::cout << "\nc == d: " << (c == d) << std::endl;
    std::cout << "c != d: " << (c != d) << std::endl;
    std::cout << "c <  d: " << (c < d) << std::endl;
    std::cout << "c >  d: " << (c > d) << std::endl;

    std::cout << "\nОбычные функции" << std::endl;
    segmentFree e(p1, p2);
    segmentFree f(p3, p4);
    std::cout << "\ne: "; e.printObj();
    std::cout << "f: "; f.printObj();
    std::cout << "\ne == f: " << (e == f) << std::endl;
    std::cout << "e != f: " << (e != f) << std::endl;
    std::cout << "e <  f: " << (e < f) << std::endl;
    std::cout << "e >  f: " << (e > f) << std::endl;

    return 0;
}
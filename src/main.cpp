#include <iostream>
using namespace std;

class point2D {
public:
    point2D() {
        _x = 0;
        _y = 0;
    }

    point2D(int x, int y) {
        _x = x;
        _y = y;
    }

    void setX(int x) {
        _x = x;
    }

    void setY(int y) {
        _y = y;
    }

    int getX() {
        return _x;
    }

    int getY() {
        return _y;
    }

    void showPoint() {
        cout << "my Point" << endl;
        cout << "x: " << _x << endl;
        cout << "y: " << _y << endl;
    }

private:
    int _x;
    int _y;
};

void functionCompareX(point2D point1, point2D point2) {
    if (point1.getX() > point2.getX()) {
        cout << "point2 ближе, чем point1" << endl;
    } else if (point1.getX() < point2.getX()) {
        cout << "point1 ближе, чем point2" << endl;
    } else if (point1.getX() == point2.getX()) {
        cout << "point1 и point2 расположены одинаково" << endl;
    }
}

int main() {
    int x, y;

    cout << "Enter x and y: " << endl;
    cin >> x >> y;

    point2D myPoint1(x, y);

    myPoint1.showPoint();

    myPoint1.setX(99);
    myPoint1.setY(333);
    myPoint1.showPoint();

    cout << " X = " << myPoint1.getX() << endl;
    cout << " Y = " << myPoint1.getY() << endl;

    return 0;
}

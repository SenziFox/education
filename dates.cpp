#include <iostream>
using namespace std;

class dates {
public:
    dates() { 
        _day = 0; 
        _month = 0; 
        _year = 0; 
    }

    dates(int day, int month, int year) {
        _day = day; 
        _month = month; 
        _year = year;
    }

    void setDay(int day) { 
        _day = day; 
    }
    void setMonth(int month) { 
        _month = month; 
    }

    void setYear(int year) { 
        _year = year; 
    }

    int getDay() const { 
        return _day; 
    }

    int getMonth() const { 
        return _month; 
    }

    int getYear() const { 
        return _year; 
    }

    void showDate() const {
        cout << "my Date" << endl;
        cout << "day: " << _day << endl;
        cout << "month: " << _month << endl;
        cout << "year: " << _year << endl;
    }

    void compareYear(dates date1, dates date2) {
        if (date1.getYear() > date2.getYear())
            cout << "год date1 больше, чем date2" << endl;
        else if (date1.getYear() < date2.getYear())
            cout << "год date1 меньше, чем date2" << endl;
        else
            cout << "год date1 и date2 одинаковы" << endl;
    }

private:
    int _day, _month, _year;
};

ostream& operator<<(ostream& out, const dates& d) {
    out << d.getDay() << endl;
    out << d.getMonth() << endl;
    out << d.getYear() << endl;
    return out;
}

int main() {
    int day1, day2, month1, month2, year1, year2;
    cout << "enter date1 (day month year): " << endl;
    cin >> day1 >> month1 >> year1;
    cout << "enter date2 (day month year): " << endl;
    cin >> day2 >> month2 >> year2;

    dates myDate1(day1, month1, year1);
    dates myDate2(day2, month2, year2);
    myDate1.compareYear(myDate1, myDate2);
    cout << "Date 1:" << endl << myDate1;
    cout << "Date 2:" << endl << myDate2;
    return 0;
}
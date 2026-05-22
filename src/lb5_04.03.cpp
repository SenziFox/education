// lb5_04.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>
#include <string>

class Rectangle {
private:
    double width;
    double height;
public:
    Rectangle();
    Rectangle(double width, double height);

    void setWidth(double width);
    void setHeight(double height);
    double getWidth() const;
    double getHeight() const;

    friend std::ostream& operator<<(std::ostream& out, const Rectangle& r);
    friend std::istream& operator>>(std::istream& in, Rectangle& r);
};

Rectangle::Rectangle() : width(0.0), height(0.0) {}
Rectangle::Rectangle(double w, double h) : width(w), height(h) {}

void Rectangle::setWidth(double w) { width = w; }
void Rectangle::setHeight(double h) { height = h; }
double Rectangle::getWidth() const { return width; }
double Rectangle::getHeight() const { return height; }

std::ostream& operator<<(std::ostream& out, const Rectangle& r) {
    out << "width : " << r.width << std::endl;
    out << "height: " << r.height << std::endl;
    out << "area  : " << r.width * r.height;
    return out;
}
std::istream& operator>>(std::istream& in, Rectangle& r) {
    double w, h;
    std::cout << "введите width : "; in >> w;
    std::cout << "введите height: "; in >> h;
    r.setWidth(w);
    r.setHeight(h);
    return in;
}


class Book {
private:
    std::string title;
    std::string author;
    int year;
    double price;
    int pages;
public:
    Book();
    Book(std::string title, std::string author, int year, double price, int pages);

    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setYear(int year);
    void setPrice(double price);
    void setPages(int pages);

    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    double getPrice() const;
    int getPages() const;

    friend std::ostream& operator<<(std::ostream& out, const Book& b);
    friend std::istream& operator>>(std::istream& in, Book& b);
};

Book::Book() : title("Без названия"), author("Неизвестен"), year(0), price(0.0), pages(0) {}
Book::Book(std::string t, std::string a, int y, double p, int pg) : title(t), author(a), year(y), price(p), pages(pg) {}

void Book::setTitle(std::string t) { title = t; }
void Book::setAuthor(std::string a) { author = a; }
void Book::setYear(int y) { year = y; }
void Book::setPrice(double p) { price = p; }
void Book::setPages(int pg) { pages = pg; }

std::string Book::getTitle() const { return title; }
std::string Book::getAuthor() const { return author; }
int Book::getYear() const { return year; }
double Book::getPrice() const { return price; }
int Book::getPages() const { return pages; }

std::ostream& operator<<(std::ostream& out, const Book& b) {
    out << "название: " << b.title << std::endl;
    out << "автор   : " << b.author << std::endl;
    out << "год     : " << b.year << std::endl;
    out << "цена    : " << b.price << " руб." << std::endl;
    out << "страниц : " << b.pages;
    return out;
}
std::istream& operator>>(std::istream& in, Book& b) {
    std::string t, a;
    int y, pg;
    double p;
    std::cout << "введите название: "; std::getline(in >> std::ws, t);
    std::cout << "введите автора  : "; std::getline(in >> std::ws, a);
    std::cout << "введите год     : "; in >> y;
    std::cout << "введите цену    : "; in >> p;
    std::cout << "введите страниц : "; in >> pg;
    b.setTitle(t); b.setAuthor(a); b.setYear(y); b.setPrice(p); b.setPages(pg);
    return in;
}


int main() {
    Rectangle r1(5.0, 3.0);
    std::cout << "объект r1 (конструктор с параметрами)" << std::endl;
    std::cout << r1 << std::endl;

    Rectangle r2;
    std::cout << "\nввод объекта r2" << std::endl;
    std::cin >> r2;
    std::cout << r2 << std::endl;

    Book b1("Мастер и Маргарита", "М. А. Булгаков", 1967, 650.0, 480);
    std::cout << "\nобъект b1 (конструктор с параметрами)" << std::endl;
    std::cout << b1 << std::endl;

    Book b2;
    std::cout << "\nввод объекта b2" << std::endl;
    std::cin >> b2;
    std::cout << b2 << std::endl;

    return 0;
}
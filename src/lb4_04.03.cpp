// lb4_04.03.cpp
// https://github.com/SenziFox/education/tree/main/src

#include <iostream>
#include <string>

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

    void print() const;
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

void Book::print() const {
    std::cout << "название: " << title << std::endl;
    std::cout << "автор   : " << author << std::endl;
    std::cout << "год     : " << year << std::endl;
    std::cout << "цена    : " << price << " руб." << std::endl;
    std::cout << "страниц : " << pages << std::endl;
}

int main() {
    Book b1;
    std::cout << "Объект b1 (конструктор по умолчанию)" << std::endl;
    b1.print();

    b1.setTitle("Мастер и Маргарита");
    b1.setAuthor("М. А. Булгаков");
    b1.setYear(1967);
    b1.setPrice(650.0);
    b1.setPages(480);
    std::cout << "\nb1 после setX()" << std::endl;
    b1.print();

    Book b2("Преступление и наказание", "Ф. М. Достоевский", 1866, 420.0, 608);
    std::cout << "\nОбъект b2 (конструктор с параметрами)" << std::endl;
    b2.print();

    std::cout << "\nГеттеры b2" << std::endl;
    std::cout << "название: " << b2.getTitle() << std::endl;
    std::cout << "автор   : " << b2.getAuthor() << std::endl;
    std::cout << "год     : " << b2.getYear() << std::endl;
    std::cout << "цена    : " << b2.getPrice() << " руб." << std::endl;
    std::cout << "страниц : " << b2.getPages() << std::endl;

    return 0;
}
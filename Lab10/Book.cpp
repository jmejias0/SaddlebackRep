//====================================================================
// Attached: Lab 10 - Overload operators
//
//====================================================================
// File: Book.cpp
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#include "Book.h"

int Book::count = 0;

Book::Book() : isbn(""), year(0), price(0.0) {
    count++;
}

Book::Book(string isbn, int year, double price) : isbn(isbn), year(year), price(price) {
    count++;
}

string Book::getISBN() const {
    return isbn;
}

int Book::getYear() const {
    return year;
}

double Book::getPrice() const {
    return price;
}

int Book::getCount() {
    return count;
}

bool Book::operator>(const Book& other) const {
    return price > other.price;
}

bool Book::operator==(const Book& other) const {
    return price == other.price;
}

bool Book::operator>(double price) const {
    return this->price > price;
}

double Book::operator+(const Book& other) const {
    return price + other.price;
}

bool Book::operator<(int year) const {
    return this->year < year;
}

void Book::displayBook() const {
    cout << "ISBN: " << isbn << "\n";
    cout << "Year: " << year << "\n";
    cout << "Price: " << price << "\n";
}

ostream& operator<<(ostream& stream, const Book& book) {
    stream << "ISBN: " << book.isbn << "\n";
    stream << "Year: " << book.year << "\n";
    stream << "Price: " << book.price << "\n";
    return stream;
}

istream& operator>>(istream& stream, Book& book) {
    cout << "ISBN: ";
    stream >> book.isbn;
    cout << "Year: ";
    stream >> book.year;
    cout << "Price: ";
    stream >> book.price;
    return stream;
}


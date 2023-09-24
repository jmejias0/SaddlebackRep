//====================================================================
// Attached: Lab 10 - Overload operators
//
//====================================================================
// File: Book.h
// ===================================================================
// Programmer:  Jose Mejias
// Class: CS1B
// ===================================================================

#pragma once

#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string isbn;
    int year;
    double price;
    static int count;

public:
    Book();
    Book(string isbn, int year, double price);

    string getISBN() const;
    int getYear() const;
    double getPrice() const;
    static int getCount();

    // Overloaded operators
    bool operator>(const Book& other) const;
    bool operator==(const Book& other) const;
    bool operator>(double price) const;
    double operator+(const Book& other) const;
    bool operator<(int year) const;

    // Friend functions for stream operators
    friend ostream& operator<<(ostream& stream, const Book& book);
    friend istream& operator>>(istream& stream, Book& book);

    void displayBook() const;
};
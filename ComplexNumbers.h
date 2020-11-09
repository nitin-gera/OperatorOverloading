#ifndef COMPLEXNUMBERS_H
#define COMPLEXNUMBERS_H

#include <iostream>
using namespace std;

class Complex
{
public:
    Complex();
    Complex(int real, int imaginary);

    int getReal() const;
    void setReal(int value);

    int getImaginary() const;
    void setImaginary(int value);

    void Print();

    const Complex& operator+(const Complex &other);
    bool operator<(const Complex &other);
private:
    int real;
    int imaginary;
};

bool operator<(const Complex& first, const Complex& second);
ostream& operator<<(ostream&, const Complex&);

#endif // COMPLEXNUMBERS_H

#include "ComplexNumbers.h"

Complex::Complex(): real(0), imaginary(0)
{

}

Complex::Complex(int real, int imaginary) : real(real), imaginary(imaginary)
{

}

int Complex::getReal() const
{
    return real;
}

void Complex::setReal(int value)
{
    real = value;
}

int Complex::getImaginary() const
{
    return imaginary;
}

void Complex::setImaginary(int value)
{
    imaginary = value;
}

void Complex::Print()
{
    cout << real << " + " << imaginary << "i" << endl;
}

const Complex &Complex::operator+(const Complex &other)
{
    this->imaginary += other.imaginary;
    this->real += other.real;

    return *this;
}

bool Complex::operator<(const Complex &other)
{
    return this->real == other.real ? this->imaginary < other.imaginary : this->real < other.real;
}

bool operator<(const Complex &first, const Complex &second)
{
    return first.getReal() == second.getReal() ? first.getImaginary() < second.getImaginary() : first.getReal() < second.getReal();
}

ostream &operator<<(ostream &os, const Complex &c)
{
    os << c.getReal() << " + " << c.getImaginary() << "i" << endl;
    return os;
}

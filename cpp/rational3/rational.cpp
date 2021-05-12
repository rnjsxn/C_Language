#include <iostream>
#include "rational.h"

std::ostream& operator<<(std::ostream& out,const Rational& rhs)
{
  //  out<<"("<<rhs.num()<<"/ "<<rhs.den()<<") ";
    out<<"("<<rhs.n<<"/"<<rhs.d<<")";
    return out;  //cout
}

Rational operator+(const Rational& lhs,const Rational& rhs)
{
    return Rational(lhs.n+ rhs.n, lhs.d+ rhs.d);
    //return Rational(lhs.num()+ rhs.num(), lhs.den()+ rhs.den());
}

Rational operator-(const Rational& lhs,const Rational& rhs)
{
    return Rational(lhs.n- rhs.n, lhs.d- rhs.d);
    //return Rational(lhs.num()- rhs.num(), lhs.den()- rhs.den());
}

Rational::Rational(int n, int d)
{
    this->n= n;
    this->d= d;
}

Rational::Rational(const Rational &rhs)
{
    this->n= rhs.n;
    this->d= rhs.d; 
}

Rational::~Rational()
{

}

Rational& Rational:: operator= (const Rational& rhs)
{
    this->n= rhs.n;
    this->d= rhs.d;

    return *this;
}

bool Rational::operator== (const Rational& rhs) const
{
    return (this-> n== rhs.n && this-> d== rhs.d);
}

void Rational::num(int n)
{
    this->n= n;
}

void Rational::den(int d)
{
    this->d= d;
}

int Rational::num() const
{
    return this->n;
}

int Rational::den() const
{
    return this->d;
}
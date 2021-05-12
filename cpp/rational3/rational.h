#ifndef RATIONAL_H
#define RATIONAL_H
#include <iostream>

class Rational;
/*
std::ostream& operator<<(std::ostream& out,const Rational& rhs);

Rational operator+(const Rational& lhs,const Rational& rhs);
Rational operator-(const Rational& lhs,const Rational& rhs);
*/
class Rational{

friend std::ostream& operator<<(std::ostream& out,const Rational& rhs);
 
friend Rational operator+(const Rational& lhs,const Rational& rhs);
friend Rational operator-(const Rational& lhs,const Rational& rhs);

private:
    int n;
    int d;

public:
    Rational(int n=0, int d= 1);
    Rational(const Rational& rhs);
    ~Rational();

    Rational& operator= (const Rational& rhs);
    bool operator== (const Rational& rhs) const;

    void num(int n);
    void den(int d);

    int num() const;
    int den() const;

};
#endif
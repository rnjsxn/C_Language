#ifndef RATIONAL_H
#define RATIONAL_H

class Rational{
private:
    int n;
    int d;

public:
    Rational(int n=0, int d= 1);
    Rational(const Rational& rhs);
    ~Rational();

    Rational& operator= (const Rational& rhs);
    bool operator== (const Rational& rhs);

    void num(int n);
    void den(int d);

    int num();
    int den();

};
#endif
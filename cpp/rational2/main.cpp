#include <iostream>
#include "rational.h"

int main(){

    Rational r1;
    Rational r2= 3;
    Rational r3(3,4);
    Rational r4= r3;

    //Rational r5;
    //r5= r3;

    r1= r3; //r1.operator=(r3) or ::operator(r1,r3)
   // r1.num(r3.num());
   // r1.num(r3.num());

    std::cout<< "r1: ("<< r1.num()<<"/ "<<r1.den()<< ") "<< std::endl;
    std::cout<< "r2: ("<< r2.num()<<"/ "<<r2.den()<< ") "<< std::endl;
    std::cout<< "r3: ("<< r3.num()<<"/ "<<r3.den()<< ") "<< std::endl;
    std::cout<< "r4: ("<< r4.num()<<"/ "<<r4.den()<< ") "<< std::endl;
    //std::cout<< "r5: ("<< r5.num()<<"/ "<<r5.den()<< ") "<< std::endl;

    if(r1==r3)
    //if(r1.num()== r3.num() && r1.den()== r3.den())
        std::cout<< "r1 and r3 are equal"<< std::endl;
    else
        std::cout<< "r1 and r3 are not equal"<< std::endl;


    return 0;
}
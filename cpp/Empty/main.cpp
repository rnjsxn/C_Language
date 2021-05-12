#include "empty.h"

int main()
{
    Empty e1;
    Empty e2=e1; //Empty e2(e1)

    e2=e1; //replacement operator

    Empty *p= &e1; //address operator, &e1-> e1.operator&()

    const Empty e3; //constant 
    const Empty *p2= &e3; //constant->address opreator

    return 0;
}
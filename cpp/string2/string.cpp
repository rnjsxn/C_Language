#include <iostream>
#include <cstring>
#include <cassert>
#include "string.h"

#ifndef INLINE
#define inline
#include "string.inl"
#endif

void String::set_str(const char *str)
{
     if(str ) //deep copy
    {
        this->str= new char[strlen(str)+1];
        assert(this->str);
        strcpy(this->str, str);

        this->len= strlen(str);
    } else {
        this->str= new char[1];
        assert(this->str );
        this->str[0]= '\0';

        this->len= 0;
    }
}

String& String::operator=(const String& rhs)
{
    if(this != &rhs)  //self-assginment test.
    {    
    delete[]this->str;

    this->set_str(rhs.str);
    }
    return *this;
}

const String String::operator+(const String& rhs) const
{
    char *buf= new char[this->len +rhs.len+1];
    assert(buf );
    strcpy(buf, this->str);
    strcat(buf, rhs.str);

    String result(buf, true); //delete X
    //delete[] buf;
}


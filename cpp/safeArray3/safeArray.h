#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

class SafeArray : public Array{ //array->public //'is a' 
private:

public:
    //SafeArray();
    //SafeArray(const SafeArray& );
    //~SafeArray();
    //explicit SafeArray(int size= SafeArray::Array::getArraySize());
    explicit SafeArray(int size=SafeArray::Array::ARRAYSIZE);
    SafeArray(const int *pArr,int size);
    SafeArray(const SafeArray& rhs);
    virtual ~SafeArray();

    SafeArray& operator=(const SafeArray& rhs);

    bool operator==(const SafeArray& rhs) const;

    virtual int& operator[](int index); //overriding (name, returntype,param)is same
    virtual const int& operator[](int index) const;
    
};
#endif
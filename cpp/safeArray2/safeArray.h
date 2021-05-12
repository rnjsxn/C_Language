#ifndef SAFEARRAY_H
#define SAFEARRAY_H
#include "array.h"

template <typename T>
class SafeArray : public Array<T>{  
private:

public:
    explicit SafeArray(int size=SafeArray<T>::Array::ARRAYSIZE);
    SafeArray(const T *pArr,int size);
    SafeArray(const SafeArray<T>& rhs);
    virtual ~SafeArray();

    SafeArray<T>& operator=(const SafeArray<T>& rhs);

    bool operator==(const SafeArray<T>& rhs) const;

    virtual T& operator[](int index); 
    virtual const T& operator[](int index) const;
};

#include <cassert>
//#include "safeArray.h"
template <typename T>
SafeArray<T>::SafeArray(int size)
:Array<T>(size)
{

}
template <typename T>
SafeArray<T>::SafeArray(const T *pArr,int size)
:Array<T>(pArr,size)
{

}
template <typename T>
SafeArray<T>::SafeArray(const SafeArray<T>& rhs)
:Array<T>((Array<T>)rhs)  //slicing
{

}
template <typename T>
SafeArray<T>::~SafeArray()
{
    
}
template <typename T>
SafeArray<T>& SafeArray<T>::operator=(const SafeArray<T>& rhs)
{
    return (SafeArray<T>& )this->Array<T>::operator=( (Array<T>)rhs);
}
template <typename T>
bool SafeArray<T>::operator==(const SafeArray<T>&rhs) const
{
    return this->Array<T>::operator==( (Array<T>)rhs);
}
template <typename T>
T& SafeArray<T>::operator[](int index) //alpha: boundary check
{
    assert(index>=0 && index<this->Array<T>::size_);
    return this->Array<T>::operator[](index);
}
template <typename T>
const T& SafeArray<T>::operator[](int index) const 
{ 
    assert(index>=0 && index<this->Array<T>::size_);
    return this->Array<T>::operator[](index);
}  
#endif
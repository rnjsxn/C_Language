#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

//extern const int ARRAYSIZE; //extern (global variable)

class Array {
private:
    static const int ARRAYSIZE; //extern (global variable)

    int *pArr_;
    int size_;

public: /*
    Array* operator&();
    const Array* operator&() const; */

    //Array();
    explicit Array(int size=100); //
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    ~Array();

    Array& operator= (const Array& rhs);

    bool operator== (const Array& rhs) const;

    int& operator[] (int index); //rep

    const int& operator[] (int index) const;

    int size() const;
};
#endif
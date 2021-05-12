#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100
//extern const int ARRAYSIZE;

class Array{
private:
    int *pArr_;
    

protected:
    int size_;
    static const int ARRAYSIZE;
public:
    static int getArraySize();
    //Array(); //{ }
    //Array(const Array& rhs);
    //~Array();
    //Array& operator=(const Array& rhs);
    //Array* operaotor&();
    //const Array* operator&() const;

    //Array(); X
    explicit Array(int size=ARRAYSIZE);  //Array::ARRAYSIZE
    Array(const int *pArr, int size);
    Array(const Array& rhs);
    virtual ~Array();

    Array& operator=(const Array& rhs);

    bool operator==(const Array& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    int size() const;

};
#endif
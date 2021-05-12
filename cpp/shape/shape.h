#ifndef SHAPE_H
#define SHAPE_H

class Shape{ //Abstruct Base calss(ABC)
//private:
protected:
    int x_;
    int y_;

public:
    //Shape();            //is not generated
    //Shape(const Shape&); //cannot use
    //Shape& operator=(const Shape& );
    //&
    Shape(int x, int y);
    virtual ~Shape() {}
    void move(int x,int y);
    //double area() const;          
    virtual double area() const=0; //pure virtual function
};
#endif
#ifndef STRING_H
#define STRING_H
#include <iostream>

class StringRep{
friend class String;

private:
    char *str;
    int len;

    int rc;
    
    StringRep(const StringRep&);
    StringRep& operator=(const StringRep&);

    StringRep(const char *str);  //only used by String mem.fun.
    ~StringRep(); //only used by String mem.fun.
public:
    //StringRep() X //is not generated
    
};

class String{
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
    StringRep *rep;

public:
    String(const char *str=NULL);
    String(const String& rhs);
    ~String();

    String& operator=(const String& rhs);

    bool operator==(const String& rhs) const;

    const String operator+(const String& rhs) const;

    const char *c_str() const;
    int length() const;
};
#endif
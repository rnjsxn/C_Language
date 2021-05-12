#ifndef INVALD_INDEX_H
#define INVALD_INDEX_H

class InvalidIndex{
private:
    int index_;

public:
    //InvalidIndex();
    //InvalidIndex(const InvalidIndex& rhs);
    //~InvalidIndex();
    //InvalidIndex& operator=(const InvalidIndex& rhs);
    //InvalidIndex* operator&();
    //const InvalidIndex* operator&() const;

    InvalidIndex(int index);

    int invalid() const;

};
#endif
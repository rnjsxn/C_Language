#ifndef QUEUE_H
#define QUEUE_H

/*(typedef) struct(Queue) {
    int *pArr;
    int size;
    int front;
    int rear;

    void initQueue(int size);
    void cleanupQueue(void);

    void push(int data);
    int pop(void);
}; */
class Queue{
private:
    int *pArr;
    int size;
    int front;
    int rear;

public:
    Queue(int size); //(void)Queue X, constructor
    ~Queue(); //destructor

    void push(int data);
    int pop();
};

#endif
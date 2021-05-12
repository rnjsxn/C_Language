#ifndef STACK_H
#define STACK_H

class Stack{
private:
	int *pArr;
	int size;
	int tos;

public:
	//void initStack(int size);
	Stack(int size);
	//void cleanupStack();
	~Stack();

	void push(int data);
	int pop();
};


#endif

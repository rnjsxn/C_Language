#include <stdio.h>

int a, b;

void swap(void)
{
	int tmp = a;
	a = b;
	b = tmp;
}
int main(void)
{
	a= 100;
	b= 200;
	printf("a: %d\t b: %d\n", a, b);
	
	swap();
	
	printf("a: %d\t b: %d\n", a, b);
	
	return 0;
}

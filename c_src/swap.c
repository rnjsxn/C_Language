#include <stdio.h>

int main(void)
{
	int a , b;
	a= 100;
	b= 200;
	printf("a: %d\t b: %d\n", a, b);
	{
	int tmp = a;
	a = b;
	b = tmp;
	}
	
	printf("a: %d\t b: %d\n", a, b);
	
	return 0;
}

#include <stdio.h>

int main(void)
{
	int a , b;
	
	a=5;
	b= ++a;
	printf("a: %d\t b: %d\n", a, b);
	
	a=5;
	b= a++;
	printf("a: %d\t b: %d\n", a, b);
	return 0;
}

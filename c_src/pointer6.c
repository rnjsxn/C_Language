#include <stdio.h>

int main(void)
{
	void *p;
	
	int a = 100;
	p = &a;
	
	//*p=200;
	*(int *)p = 200;
	printf("a: %d\n", a);
	
	double d = 3.14;
	p = &d;
	
	*(double*)p = 2.718;
	printf("d: %f\n", d);
	
	return 0;
}

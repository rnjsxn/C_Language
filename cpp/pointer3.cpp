#include <stdio.h>

int main(void)
{
	int a = 0x12345678;
//	int *p;
	char *p;
//	p = &a;
	//p = static_cast<char *>(&a);
	p=p = reinterpret_cast<char *>(&a);
	printf("*p: 0x%x\n", *p);
	
	return 0;
}

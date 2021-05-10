#include <stdio.h>

int main(void)
{
	int a;
	int nums[10];
	int *p;
	
	p = &a;
	*p = 100;
	p = &nums[2];
	*p = 200;
	
	return 0;
}

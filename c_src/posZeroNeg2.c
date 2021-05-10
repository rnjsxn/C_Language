#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	printf("%d is a %s number\n", 
	num, (num> 0) ? "positivev" : (num==0) ? "zero" : "negative");
	
	return 0;
}

#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	int isRight;
	//isRight = 1 <= num <= 10 ;
	isRight = 1 <= num && num <= 10;
	
	printf("%d is betwen 1 to 10: %d\n", num, isRight);
	
	return 0;
}


#include <stdio.h>

int main(void)
{
	int num;
	scanf("%d", &num);
	
	if(num < 0){
	num = -num;
	}
	
	printf("absolute vale: %d\n",  num);
	
	return 0;
}



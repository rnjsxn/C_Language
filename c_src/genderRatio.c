#include <stdio.h>

int main(void)
{	
	int man, woman;
	scanf("%d %d", &man , &woman);
	
	double manRatio, womanRatio;
	//manRatio = 1.0* man /(man + woman) * 100;
	//womanRatio = 1.0 * woman / (man + woman) * 100; 
	manRatio = (double)man / (man + woman) * 100;
	womanRatio = (double)woman / (man + woman) * 100;
	
	printf("manRatio: %.2f\t womanRatio: %.2f\t\n", manRatio, womanRatio); 
	
	return 0;
}

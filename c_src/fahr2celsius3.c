#include <stdio.h>

int main(void)
{
	int fahr; 
	fahr = 100;
	
	int celsius1000;
	celsius1000 = 1000 * 5 * (fahr - 32) / 9; //37777
	
	int left;
	int right;
	left = celsius1000 / 1000;
	//left = 5 * (fahr - 32) / 9;
	//right = (1000 * 5 * (fahr - 32) / 9) - 37699 ;
	//right = (celsius1000 - celsius1000 / 1000 * 1000 + 5);
	right = (celsius1000 % 1000 + 5) / 10;
	
	printf("fahr: %d ---> celsius: %d.%d\n", fahr, left, right);
	return 0;
	
}


 #include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);
	
	int isLeap;
	//isLeap= year%4 == 0 && year%100 != 0 || year%400 == 0;
	isLeap= year%400 == 0 || year%4 == 0 && year%100 != 0;
	
	printf("%d is leap year: %d\n", year, isLeap);
}


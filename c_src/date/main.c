#include "date.h"

int main(void)
{
	Date today;
	today.year = 2021;
	today.month = 1;
	today.day = 13;
	
	//struct date d;
	//d= today;
	
	Date birthday = {2005, 8, 2};
	
	//printDate(today);
	printDate(&today);
	
	return 0;
}

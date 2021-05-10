#include <stdio.h>

int main(void)
{
	char str[4];
	str[0]= 65; //ascode
	str[1]= 66;
	str[2]= 67;
	str[3]= 0;
	
	str[0]= 'A';
	str[1]= 'B';
	str[2]= 'C';
	str[3]= '\0'; //null character
	
	printf("str: %s\n",str);
//	printf("str: %s\n", &str[0]);
	printf("str+1: %s\n", str+1); //next address
	
//	char str2[4]= {'A','B','C','\0');
//	char str2[4]="ABC";
	char str2[]="ABC"; //size 4
	
	printf("str2: %s\n", str2);

	return 0;
	
}

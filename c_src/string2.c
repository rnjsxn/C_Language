#include <stdio.h>

int main(void)
{
	char *str1= "hello, world";
	printf("str1: %s\n", str1);
	
	char str2[]=	"hello, world";
//	char str2[13]= {'h','e','l','l'....,'\0'};
	printf("str2: %s\n", str2);
	
	char *str3= "hello, world";
	
	if(str1 == str3) {
		printf("str1 and str3 are equl\n");
	}else {
		printf("str1 and str3 are not equl\n");
	}
	printf("%p \t %p\n", str1, str3);
	return 0;	
}

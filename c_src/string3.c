#include <stdio.h>
#include <string.h>

int main(void)
{
	char *str1= "hello, world";
	
	int len= strlen(str1);
	printf("len: %d\n", len);
	
	char str2[20]; //char *str[2];, char str[12];
	strcpy(str2,str1);
	printf("str2: %s\n", str2);
	
	//if(str1==str2)
	if(strcmp(str1, str2) == 0)
		printf("str1 and str2 are equl\n");
	else
		printf("str1 and str2 are not equl\n");
		
	strcat(str2, " "); //concatination
	strcat(str2, "Kwon");
	printf("str2: %s\n", str2);
	
	return 0;
}

#include <stdio.h>

void printStringArray1(char (*arr)[20] , int size)
{	
	int c=0;
	for(int i=0; i<size; i++) {
		printf("%s\n", &arr[i][0]); //&arr[i]
		}
}

void printStringArray2(char **arr , int size)
{
	
	for(int i=0; i<size; i++) {
		printf("%s\n", arr[i]); //&arr[i][0]
   }
}
int main(void)
{
	char cities1[5][20] = { 
		"seoul", "Los Angeless", "Paris", "Rio de janeiro", "Rome"
	};
	
	char *cities2[5] = {
		"seoul", "Los Angeless", "Paris", "Rio de janeiro", "Rome"
	};
	
	printStringArray1(cities1, 5);
	printStringArray2(cities2, 5);
	
	return 0;
}

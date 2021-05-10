#include <stdio.h>

int main(void)
{
	char ch;
	scanf("%c", &ch);
	
	int isAlphabet;
	isAlphabet= (ch >= 'A' && ch <= 'Z') ||(ch >= 'a' && ch <= 'z');
	
	printf("%c is a alphabet: %d\n", ch, isAlphabet);
	
	return 0;
}

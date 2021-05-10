#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);
	
	if(score>= 90)
		printf("%d is 'A'\n", score);
	else if(score>= 80)
		printf("%d is 'B'\n", score);
	else if(score>= 70)
		printf("%d is 'C'\n", score);
	else if(score>= 60)
		printf("%d is 'D'\n", score);
	else 
		printf("%d is 'f'\n", score);
	
	return 0;
}

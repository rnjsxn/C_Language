#include <stdio.h>

int main(void)
{
	const char grades[]= {'F', 'F', 'F', 'F', 'F', 'F', 'D', 'C', 'B', 'A', 'A'};

	int score;
	scanf("%d", &score);
	
	char grade;
	grade= grades[score /10];
	
	printf("score: %d -- grade: %c\n", score, grade);
	
	return 0;
}

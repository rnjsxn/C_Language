#include <stdio.h>

int main(void)
{
 //int score1, score2, score3, score4, score5;
	int scores[5];
	
	
	for(int i = 0; i<5; i++){
		scanf("%d", &scores[i]);
	}
	
	int sum;
//	sum= score1 + score2 + score3 + score4 + score5;
	sum = 0;
	for(int i = 0; i < 5; i++){
		sum = sum + scores[i];
	}
	
	double average;
	average= (double)sum / 5;
	
	printf("sum: %d\t average: %.2f\n", sum , average);
	
	return 0;
}

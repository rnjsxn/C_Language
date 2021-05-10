#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int question[3];
	int answer[3];
	int count= 0;
	
	question[0]= rand() % 9 +1;
	
	do{
	question[1]= rand() % 9 +1;
	} while(question[0] == question[1]);
	
	do{
	question[2]= rand() % 9 +1;
	} while(question[0] == question[2] || question[1] == question[2]);
	
	printf("question: %d %d %d\n",question[0], question[1], question[2]);
	
	while(1) {
		count++;
		
		int strike = 0;
		int ball = 0;
		
		scanf("%d %d %d", &answer[0], &answer[1], &answer[2]);
		
		for(int i = 1; i < 3; i++){
			for(int j = 0; j < 3; j++){
				if(question[i] == answer[j]){
					if(i==j)
						strike++;
					else
						ball++;
					
				}
			}
		}	
		printf("#strike: %d\t #ball: %d\n", strike, ball);	
		
		if(strike == 3)
		 break;
	} 
 	printf("congraturation. your count: %d\n", count);
	
	return 0;
}

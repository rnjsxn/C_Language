#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int nums[6] = {11, 42, 36, 9, 45, 21};
	int bonus = 10;
	printf("bonus num: ");
	scanf("%d", &bonus);
	
	//int index = 0;
	for(int i = 0; i <= 6; i++){
			for(int j = 0; j < 6; j++){
				if(i == j)
					printf("%2d ", bonus);
				else
					printf("%2d ", nums[j]);
				
			}	
			printf("\n");
				
		//	index++;
		}		
	return 0;
}

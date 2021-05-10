#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	srand(time(NULL));
	int nums[6];
	
	nums[0] = rand()%45+1; 
	
	do{
	nums[1] = rand()%45+1;
	}while(nums[0] == nums[1]);
	
	do{
	nums[2] = rand()%45+1;
	}while(nums[0] == nums[2] || nums[1] == nums[2]);
	
	do{
	nums[3] = rand()%45+1;
	}while(nums[0] == nums[3] && nums[1] == nums[3] || nums[2] == nums[3]);
	
	do{
	nums[4] = rand()%45+1;
	}while(nums[0] == nums[4] && nums[1] == nums[4] && nums[2] == nums[4] || nums[3] == nums[4]);
	
	do{
	nums[5] = rand()%45+1;
	}while(nums[0] == nums[5] && nums[1] == nums[5] && nums[2] == nums[5] && nums[3] == nums[5] || nums[4] == nums[5]);
	
	printf("%d %d %d %d %d %d\n", nums[0], nums[1], nums[2], nums[3], nums[4], nums[5]);
	
	return 0; 
}

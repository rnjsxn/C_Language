#include <stdio.h>

int main(void)
{
	int kor, eng, mat;
	scanf("%d %d %d", &kor, &eng, &mat);
	
	int sum;
	double average;
	sum = kor + eng + mat;
	average = sum / 3.0;
	
	printf("sum: %d\t average: %.2f\n", sum, average);
	
	return 0;
}

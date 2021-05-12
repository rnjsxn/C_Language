#include <stdio.h>

int main(void)
{
	int kor, mat, eng;
	scanf("%d", &kor);
	scanf("%d", &mat);
	scanf("%d", &eng);
	
	int sum;
	double average;
	sum = kor + mat + eng;
	//average = (kor+ mat+ eng)/ 3.0;
	average = static_cast<double>(sum) / 3;
	
	printf("sum: %d\t, average: %.2f", sum, average);
	
	return 0;
	
}

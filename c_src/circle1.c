#include <stdio.h>
#include <math.h>
#define PI 3.141592
int main(void)
{
	int radius;
	printf("input radius: ");
	scanf("%d", &radius);
	
	double area;
	//area = PI * radius * radius;
	area = PI * pow(radius , 2);
	
	printf("area: %.2f\n", area);
	
	return 0;
}

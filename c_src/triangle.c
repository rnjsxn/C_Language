#include <stdio.h>

int main(void)
{
	int width, height;
	printf("input width height : ");
	scanf("%d, %d", &width, &height);
	
	double area;
	area = 1.0 / 2.0 * width * height;
	
	
	printf("area: %.1f\n", area);
	
	return 0;
}

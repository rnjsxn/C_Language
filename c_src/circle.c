#include <stdio.h>

int main(void)
{
	int radius;
	scanf("%d", &radius);
	
	double extent;
	extent = radius * radius * 3.14;
	
	printf("radius: %d, radius: %d, extent: %.2f", radius, radius, extent);
	
	return 0;
}

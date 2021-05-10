#include <stdio.h>

int main(void)
{
	int width;
	int height;
	scanf("%d", &width);
	scanf("%d", &height);
	
	double extent;
	extent = width * height;
	
	printf("width: %d, heigjt: %d, extent: %.1f", width, height, extent);
	
	return 0;
}

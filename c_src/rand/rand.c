#include <stdio.h>
#include <time.h>

void my_srand(int s); //function declaration
int my_rand(void);

int main(void)
{
	my_srand(time(NULL));
	
	for(int i=1; i<=10; i++) 
		printf("%d\n", my_rand());
			
	return 0;
}

int seed;

void my_srand(int s) //function definition
{
	seed = s;
}
	
int	my_rand(void)
{
	seed = seed * 1103515245 + 12345;
	
	return((unsigned)(seed/65536) % 32768);
}

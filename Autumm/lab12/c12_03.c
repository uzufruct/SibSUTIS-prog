#include <stdio.h>
#include <math.h>

int main()
{
	long x,i;
	long y;
	printf("Input x and number i: ");
	scanf("%ld %ld",&x,&i);
	y = pow(10,i);
	printf("Output: %ld\n", (x / y) % 10 );
	return 0;
}

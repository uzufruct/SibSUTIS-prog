#include <stdio.h>

int main()
{
	double x = 0.3;
	long double y = 0.3;
	for (int i=1; i<1075; i++)
	{
		x /= 2;
		y /= 2;
		printf("%d: %le = %Le\n",i,x,y);
	}
	return 0;
}

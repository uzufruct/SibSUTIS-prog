#include <stdio.h>

int main()
{
int n,i;
printf("Input N, i: ");
scanf("%d %d", &n, &i);
if (i <=n )
	{
		printf("%d\n",i);
	}
	else
	{
		i %= n;
		if (i == 0)
		{
			i += n;
		}
		printf("%d\n",i);
	}
return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int m,n;
	scanf("%d %d",&m,&n);
	int min,max;
	if (m>n)
	{
		max = m;
		min = n;
	}
	else
	{
		max = n;
		min = m;
	}
	int a,b;

	for (int i = min; i >= 1 ; --i)
	{
		if ( (max % i == 0) && (min % i == 0) )
		{
			a = i;
			break;
		}
	}

	for (int i = max; ; ++i)
	{
		if ( (i % max == 0) && (i % min == 0) )
		{
			b = i;
			break;
		}
	}
	printf("%d %d\n",a,b);
	// printf("%d\n",2%1);
	return 0;
}
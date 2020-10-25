#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n,sum,x,count;
	sum=0;
	count=0;
	scanf("%d",&n);
	if (n==0)
	{
		printf("average = 0.0\n");
		printf("count = 0\n");
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d",&x);
		sum+=x;
		if (x>=60)
		{
			count++;
		}
	}

	printf("average = %.1f\n", sum/(double)n);
	printf("count = %d\n",count);
	return 0;
}
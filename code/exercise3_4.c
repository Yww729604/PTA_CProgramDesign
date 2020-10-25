#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int count[5]={0};
	for (int i = 0; i < n; ++i)
	{
		int out;
		scanf("%d",&out);
		if (out>=90)
		{
			count[0]++;
		}
		else if (out>=80)
		{
			count[1]++;
		}
		else if (out>=70)
		{
			count[2]++;
		}
		else if (out>=60)
		{
			count[3]++;
		}
		else
		{
			count[4]++;
		}
	}

	printf("%d %d %d %d %d\n",count[0],count[1],count[2],count[3],count[4] );
	return 0;
}
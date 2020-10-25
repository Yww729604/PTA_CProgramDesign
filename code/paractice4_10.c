#include <stdio.h>

int main(int argc, char const *argv[])
{
	int min;
	int m;
	scanf("%d",&m);
	scanf("%d",&min);
	int num;
	for (int i = 0; i < m-1;i++)
	{
		scanf("%d",&num);
		if (num<min)
		{
			min=num;
		}
	}

	printf("min = %d\n",min);
	return 0;
}	
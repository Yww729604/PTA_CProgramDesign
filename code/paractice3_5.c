#include <stdio.h>

int isLeapYear(int i)
{
	int rcd;
	if (i % 400 == 0)
	{
		rcd = 1;
	}
	else if ((i % 4 == 0) && (i % 100) != 0)
	{
		rcd = 1;
	}
	else
	{
		rcd = 0;
	}
	return rcd;
}

int main(int argc, char const *argv[])
{
	int n,flag;
	flag = 1;
	scanf("%d",&n);
	if (n<=2000 || n>2100)
	{
		printf("Invalid year!\n");
	}
	else
	{
		for (int i = 2001; i <= n; ++i)
		{
			if (isLeapYear(i))
			{
				flag = 0;
				printf("%d\n", i);
			}
		}
		if (flag)
		{
			printf("None\n");
		}
	}
	return 0;
}
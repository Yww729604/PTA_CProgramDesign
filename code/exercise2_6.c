#include <stdio.h>

int fact(int n)
{
	if (n==1)
	{
		return 1;
	}
	else
	{
		return fact(n-1)*n;
	}
}

int count(int N)
{
	if (N>1)
	{
		// printf("%d\n", N);
		return count(N-1)+fact(N);
	}
	else
	{
		return 1;
	}
}

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);

	int sum = count(N);
	printf("%d\n", sum);
	return 0;
}
#include <stdio.h>

int fabnach(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	else
	{
		return fabnach(n-1)+fabnach(n-2);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	int months;
	for (months = 1; fabnach(months) < n; ++months);
	printf("%d\n", months );
	return 0;
}
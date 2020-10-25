#include <stdio.h>

int sign(int n)
{
	int rcd=0;
	if (n>0)
	{
		rcd=1;
	}
	else if (n<0)
	{
		rcd=-1;
	}
	return rcd;
}

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	printf("sign(%d) = %d\n",n,sign(n));
	return 0;
}
#include <stdio.h>


int main(int argc, char const *argv[])
{
	int l,u;
	scanf("%d %d",&l,&u);
	if (l>u || u>100)
	{
		printf("Invalid.\n");
	}
	else
	{
		printf("fahr celsius\n");
		for (int i = l;i<=u;i+=2)
		{
			printf("%d%6.1f\n",i,5*(i-32)/9.0);
		}
	}
	return 0;
}
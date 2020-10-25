#include <stdio.h>


int main(int argc, char const *argv[])
{
	int N;
	int out = 1;
	scanf("%d",&N);
	while (--N)
	{
		out = (out + 1)*2; 
	}

	printf("%d\n", out);
	return 0;
}
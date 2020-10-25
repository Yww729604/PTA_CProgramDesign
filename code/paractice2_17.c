#include <stdio.h>
#include <math.h>


int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);
	// printf("%d\n",(int)pow(3,1));
	for (int i = 0; i <= N; ++i)
	{
		printf("pow(3,%d) = %d\n",i,(int)pow(3,i));
	}
	return 0;
}
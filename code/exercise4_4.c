#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
	int a,n;

	scanf("%d %d",&a,&n);
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		int temp = a;
		for (int j = 0; j < i; ++j)
		{
			temp += a*pow(10,j+1);
		}
		sum += temp;
		// printf("%d\n", sum);
	}

	printf("s = %d\n", sum);
	return 0;
}
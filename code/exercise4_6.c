#include <stdio.h>
// #include <math.h>
int p(int a,int b)
{
	int t=a;
 	for(int i=1;i<b;i++)
  		a=a*t;
 	return a;
}

int main(int argc, char const *argv[])
{
	int N;
	scanf("%d",&N);

	int start = p(10,N-1);
	int end = p(10,N);

	while(start++<end)
	{
		int out=0;
		int temp = start;
		while (temp > 0)
		{
			out += p(temp%10,N);
			temp = temp/10;
		}
		if (out == start)
		{
			printf("%d\n",start);
		}
	}
	return 0;
}
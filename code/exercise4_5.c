#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);
	int count = 0;
	for (int fen5 = x/5; fen5 > 0 ; --fen5)
	{
		for (int fen2 = (x-fen5*5)/2; fen2 > 0 ; --fen2)
		{
			for (int fen1 = (x-fen5*5-fen2*2); fen1 > 0 ; --fen1)
			{
				if (fen5*5+fen2*2+fen1==x)
				{
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",fen5,fen2,fen1,fen5+fen2+fen1);
					count++;
				}
			}
		}
	}

	printf("count = %d\n",count);

	return 0;
}
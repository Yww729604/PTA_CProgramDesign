#include <stdio.h>


int main(int argc, char const *argv[])
{
	int sum = 0;
	int ch;
	while (1)
	{
		scanf("%d",&ch);
		if (ch <= 0)
		{
			break;
		}
		else if(ch % 2 == 1)
		{
			sum += ch;
		}
	}

	printf("%d\n",sum);
	return 0;
}
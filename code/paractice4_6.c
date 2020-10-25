#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number,times;
	scanf("%d %d",&number,&times);
	int flag=1;
	for (int i = 0; i < times; ++i)
	{
		int guessNumber;
		scanf("%d",&guessNumber);
		if (guessNumber<0)
		{
			break;
		}
		if (guessNumber>number)
		{
			printf("Too big\n");
		}
		else if(guessNumber<number)
		{
			printf("Too small\n");
		}
		else
		{
			flag=0;
			if (i==0)
			{
				printf("Bingo!\n");
			}
			else if (i<=2)
			{
				printf("Lucky You!\n");
			}
			else
			{
				printf("Good Guess!\n");
			}
			break;
		}		
	}
	if (flag)
	{
		printf("Game Over\n");
	}
	return 0;
}
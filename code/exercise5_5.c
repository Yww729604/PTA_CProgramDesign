#include <stdio.h>

int CountDigit( int number, int digit );

int main()
{
    int number, digit;

    scanf("%d %d", &number, &digit);
    printf("Number of digit %d in %d: %d\n", digit, number, CountDigit(number, digit));

    return 0;
}

/* 你的代码将被嵌在这里 */

int CountDigit(int number , int digit)
{
	number = number > 0 ? number : -number;
	int count = 0;
	if (number == digit && number == 0)
	{
		count = 1;
	}
	else
	{
		while (number != 0)
		{
			if (number % 10 == digit)
			{
				count ++;
			}
			number = number/10;
		}
	}
	
	return count;
}
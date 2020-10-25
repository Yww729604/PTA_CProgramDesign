#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int reverse(int number)
{
	int flag = number > 0 ? 1 : 0;
	number = number > 0 ? number : -number;
	int rcd = 0;
	while (number)
	{
		rcd = rcd * 10 + number % 10;
		number = number / 10; 
	}
	return flag == 0 ? -rcd : rcd;
}
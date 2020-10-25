#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */

int fib( int n )
{
	int a = 1 , b = 1 , c = 0;
	if (n <= 2)
	{
		c = 1;
	}
	while (n-- > 2)
	{
		c = a + b;
		a = b;
		b = c;
	}

	return c;
} 

void PrintFN(int m, int n)
{
	int a = 1 , b = 1 , c = 0;
	int flag = 1;
	if (m == 1)
	{
		printf("1 ");
	}
	if (m < 2)
	{
		printf("1 1 ");
	}
	while (c <= n)
	{
		c = a + b;
		a = b;
		b = c;
		if (c < n && c > m )
		{
			flag = 0;
			printf("%d", c);
			if (a+b<n)
			{
				printf(" ");
			}
		}
	}
	if (flag)
	{
		printf("No Fibonacci number\n");
	}
	else
	{
		printf("\n");
	}
}


// int fib( int n )
// {
//     int sum=1,a=1,b=1;
//     for(int i=3;i<=n;i++){
//         sum=a+b;
//         b=a;
//         a=sum;
//     }
//     return sum;
// }
// void PrintFN( int m, int n )
// {
//     int a=0,k=1;
//     while(fib(k)<=n){
//         if(fib(k)>=m){
//             a++;
//             if(a==1){
//         printf("%d",fib(k));
//         }else{
//             printf(" %d",fib(k));
//         }
//        }
//        k++;
//     }
//     if(a==0){
//         printf("No Fibonacci number");
//     }
// }

#include <stdio.h>


int main(int argc, char const *argv[])
{
	
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	double price[4]={3.00,2.50,4.10,10.20};
	for (int i = 0; i < 5; ++i)
	{
		int n;
		scanf("%d",&n);
		if (n<=5 && n>=1)
		{
			printf("price = %.2f\n",price[n-1]);
		}
		else if (n==0)
		{
			break;
		}
		else
		{

			printf("price = 0.00\n");	
		}
	}
	// printf("%.2f\n", price[1]);
	return 0;
}
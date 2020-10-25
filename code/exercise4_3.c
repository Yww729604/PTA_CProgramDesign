#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	double sum = 2;
	double son = 2;
	double mother = 1;

	for (int i = 0; i < n-1; ++i)
	{
		sum += (son + mother) / son;
		double temp = son;
		son = son + mother;
		mother = temp;
		// printf("son=%.2f\tmother=%.2f\n",son,mother );
		// printf("%.2f\n", sum);
	}

	printf("%.2f\n", sum);

	return 0;
}
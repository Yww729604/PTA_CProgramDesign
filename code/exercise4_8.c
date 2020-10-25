#include <stdio.h>


int main(int argc, char const *argv[])
{
	double h,n;
	scanf("%lf %lf",&h,&n);
	if (n==0)
	{
		printf("0.0 0.0\n");
		return 0;
	}
	double height,last;
	height = h;
	last = h/2; 
	for (int i = 0; i < n-1; ++i)
	{
		height += h;
		h = h / 2;
		last = h/2;
	}

	printf("%.1f %.1f\n",height,last);
	return 0;
}
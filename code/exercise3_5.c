#include <stdio.h>
#include <math.h>


double area(double l1,double l2,double l3)
{
	double c = l1+l2+l3;
	double p = c/2;
	return pow(p*(p-l1)*(p-l2)*(p-l3),0.5);
}

int main(int argc, char const *argv[])
{
	double x1,x2,x3,y1,y2,y3;
	scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3);
	double l1=pow((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2),0.5);
	double l2=pow((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2),0.5);
	double l3=pow((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1),0.5);
	// printf("%.2f %.2f %.2f\n",l1,l2,l3);
	if (l1+l2 > l3 && l2+l3 > l1 && l1+l3 > l2)
	{
		double A = area(l1,l2,l3);
		printf("L = %.2f, A = %.2f\n",l1+l2+l3,A);
		
	}
	else
	{
		printf("Impossible\n");
	}
	return 0;
}
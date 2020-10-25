#include <stdio.h>
#include <math.h>


int countMoney(double km,int minute)
{
	double money=0;
	if (km<=3)
	{
		money+=10;
	}
	else if (km < 13)
	{
		money+=10+2*(km-3);
	}
	else
	{
		money+=10+2*7+3*(km-10);
	}
	money+=(minute/5)*2;
	// printf("%.1f\n", money);
	// printf("%d\n",(int)(minute+0.5) );
	return round(money);
}

int main(int argc, char const *argv[])
{
	double km;
	int minute;

	scanf("%lf %d",&km,&minute);
	int money = countMoney(km,minute);
	printf("%d\n",money);
	return 0;
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
	double ls,s;
	scanf("%lf %lf",&s,&ls);
	if (s>=ls*1.1)
	{
		if (s>=ls*1.5)
		{
			printf("Exceed %.0f%%. License Revoked\n",(s-ls)*100/ls);
		}
		else
		{
			printf("Exceed %.0f%%. Ticket 200",(s-ls)*100/ls);
		}
	}
	else
	{
		printf("OK\n");
	}
	return 0;
}
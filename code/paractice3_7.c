#include <stdio.h>

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d",&n);
	char out;
	if (n>=90)
	{
		out='A';
	}
	else if (n>=80)
	{
		out='B';
	}
	else if (n>=70)
	{
		out='C';
	}
	else if (n>=60)
	{
		out='D';
	}
	else
	{
		out='E';
	}

	printf("%c\n",out );
	return 0;
}
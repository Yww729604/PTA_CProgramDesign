#include <stdio.h>

int main(int argc, char const *argv[])
{
	char n;
	int letter,blank,digit,other;
	letter = blank = digit = other = 0;
	for (int i = 0; i < 10; ++i)
	{
		n=getchar();
		if ((n>='a' && n<='z')||(n>='A' && n<='Z'))
		{
			letter++;
		}
		else if (n>='0' && n<='9')
		{
			digit++;
		}
		else if (n=='\n'||n==' ')
		{
			blank++;
		}
		else
		{
			other++;
		}
	}
	printf("letter = %d, blank = %d, digit = %d, other = %d\n",
	 letter,blank,digit,other);
	return 0;
}
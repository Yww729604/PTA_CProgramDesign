#include <stdio.h>

int main(int argc, char const *argv[])
{
	int out = 0 , next = 0;
	char c;
	scanf("%d",&out);
	while(1)
	{
		scanf("%c",&c);
		if (c == '=')
		{
			printf("%d\n", out);
			break;
		}
		scanf("%d",&next);
		if (c == '+')
		{
			out += next;
		}
		else if (c == '-' )
		{
			out -= next;
		}
		else if (c == '*')
		{
			out = out * next;
		}
		else if(c == '/')
		{
			if (next == 0)
			{
				printf("ERROR\n");
				break;
			}
			else
			{
				out = out / next;
			}
		}
		else
		{
			printf("ERROR\n");
			break;
		}
		
	}
	return 0;
}
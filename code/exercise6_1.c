void StringCount( char s[] )
{
	int letter = 0 , blank = 0 , digit = 0, other = 0;
	for (int i = 0; i < MAXS ; ++i)
	{

		if (s[i] == NULL)
		{
			break;
		}
		if (s[i] <= '9' && s[i] >= '0')
		{
			digit++;
		}
		else if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] >= 'A' && s[i] <= 'Z')) 
		{
			letter++;
		}
		else if (s[i] == ' ' || s[i] == '\n')
		{
			blank++;
		}
		else
		{
			other++;
		}
	}

	printf("letter = %d, blank = %d, digit = %d, other = %d\n",letter,blank,digit,other );
}
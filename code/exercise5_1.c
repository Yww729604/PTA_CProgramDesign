int sign(int x)
{
	int rcd;
	if (x == 0)
	{
		rcd = 0;
	}
	else if(x > 0)
	{
		rcd = 1;
	}
	else
	{
		rcd = -1;
	}
	return rcd;
}
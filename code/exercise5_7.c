double funcos(double e,double x)
{
	double out = 1;
	double last = 0;
	double n = 1;
	double fact = 1;
 	while(1)
	{
		fact = fact * (2 * n - 1) * 2 * n;
		double temp =  pow(x,n*2)/fact;
		last = n % 2 == 1 ? -temp : temp;
		out += last;
		n++;
		if (temp < e)
		{
			break;
		}
	}
	return out;
}
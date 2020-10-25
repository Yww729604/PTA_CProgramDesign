int fn(int a,int n)
{
	int out = 0;
	for (int i = 0; i < n; ++i)
	{
		out = out * 10 +a;
	}
	return out;
}

int SumA(int a,int n)
{
	int sum = 0;
	for (int i = 1; i <= n; ++i)
	{
		sum += fn(a,i);
	}
	return sum;
}
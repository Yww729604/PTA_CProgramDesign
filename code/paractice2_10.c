#include <stdio.h>

float f(int n)
{
    if (n==0)
    {
        return 0.0;
    }
    else
    {
        float m = (float) n;
        return 1/m;
    }
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", n);
    float m = (float) n;
    printf("f(%.1f) = %.1f",m,f(n));
    return 0;
}
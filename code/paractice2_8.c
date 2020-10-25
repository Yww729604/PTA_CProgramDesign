#include <stdio.h>

int fahrToCelsius(int f)
{
    return 5*(f-32)/9;
}

int main()
{
    int fahr;
    scanf("%d", &fahr);
    int celsius = fahrToCelsius(fahr);
    printf("Celsius = %d",celsius);
    return 0;
}
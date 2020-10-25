#include <stdio.h>

void printSpace(int n)
{
    int times=n;
    for (;times>0;times--)
    {
        printf(" ");
    }
}

void printStar(int n)
{
    int times = 4-n;
    for (;times>1;times--)
    {
        printf("*");
        printf(" ");
    }
    printf("*");
}

int main()
{
    for(int i=0;i<4;i++)
    {
        printSpace(i);
        printStar(i);
        // printSpace(i);
        printf("\n");
    }
}
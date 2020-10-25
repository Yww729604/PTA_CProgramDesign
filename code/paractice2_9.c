#include<stdio.h>

void Print(int m,int n)
{
    printf("%d + %d = %d\n",m,n,m+n);
    printf("%d - %d = %d\n",m,n,m-n);
    printf("%d * %d = %d\n",m,n,m*n);
    printf("%d / %d = %d\n",m,n,m/n);
}

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    Print(m,n);
    return 0;
}
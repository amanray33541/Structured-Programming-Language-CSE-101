#include<stdio.h>
int main()
{
    double n;
    int a,b,c,d;
    scanf("%lf",&n);
    n=n*100;
    b=n;
    a=b%10;
    b=b/10;
    c=b%10;
    b=b/10;
    d=b%10;
    b=b/10;
    n=a*10+c+d*.1+b*.01;
    printf("%.2lf",n);
}

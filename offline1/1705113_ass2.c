#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,a,b,c;

    scanf("%f,%f,%f,%f,%f,%f",&x1,&y1,&x2,&y2,&x3,&y3);
    a=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    b=sqrt(pow((x2-x3),2)+pow((y2-y3),2));
    c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
    if((a+b>c)&&(b+c>a)&&(a+c>b))
    {
        if((a==b)&&(a==c))
            printf("Equilateral");
        else if((a==b)||(b==c)||(a==c))
            printf("Isoscles");
        else
            printf("Scalene");
    }

}

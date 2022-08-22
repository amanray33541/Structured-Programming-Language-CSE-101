#include<stdio.h>

int main()
{
    int n,x,y,i,j;
    scanf("%d", &n);
    int num[n],temp;

    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d %d", &x, &y);

    for(i=0 ; i<=x ; i++)
    {
        for(j= i+1 ; j<=x ; j++)
        {
            if(num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i=y ; i<=n-1 ; i++)
    {
        for(j= i+1 ; j<=n-1 ; j++)
        {
            if(num[i] < num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

    for(i=0 ; i<n ; i++)
    {
        printf("%d ", num[i]);
    }


    return 0;
}

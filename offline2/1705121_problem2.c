#include<stdio.h>

int main()
{
    char str1[100], str2[100], x;
    int i=0,j,n1=0,n2=0,k,l;
    gets(str1);
    scanf(" %c ", &x);
    gets(str2);

    while(str1[n1] != 0)
    {
        n1++;
    }

    while(str2[n2] != 0)
    {
        n2++;
    }

    for(i=0 ; i<n1 ; i++)
    {
        if(str1[i] == x)
        {
            n1 = n1+n2-1;
            for(j=n1-1 ; j>i ; j--)
            {
                str1[j] = str1[j-n2+1];
            }
            for(k=i,l=0 ; str2[l]!=0 ; k++,l++)
            {
                str1[k] = str2[l];
            }
            str1[n1] = 0;
            i += n2-1;
        }
    }

    printf("\n");
    puts(str1);


    return 0;
}

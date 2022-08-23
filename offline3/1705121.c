#include<stdio.h>

int main()
{
    int i,j,k,l=0,n1=0,n2=0;
    char str1[100],str2[100],x;
    scanf("%s", str1);
    scanf(" %c ", &x);
    scanf("%s", str2);

    while(str1[n1] != '\0')
    {
        n1++;
    }

    while(str2[n2] != '\0')
    {
        n2++;
    }

    for(i=0 ; i<n1 ; i++)
    {
        if(str1[i] = str2[0])
        {
            for(j=i,k=0 ; str2[k]!=0 ; j++,k++)
            {
                if(str1[j] == str2[k])
                    l++;
            }
            if(l == n2)
            {
                str1[i] = x;
                for(k=i+1 ; k<n1-n2+1 ; k++)
                {
                    str1[k] = str2[k+n2-1];
                }
                n1 = n1 - n2 + 1;
                str1[n1] = '\0';
                l=0;
            }
        }
    }

    puts(str1);



    return 0;
}

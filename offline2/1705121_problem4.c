
#include<stdio.h>

int main()
{
    int n,i,j,opt;
    scanf("%d", &n);
    int mat[n][n];

    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    scanf("%d", &opt);

    if(opt == 1)
    {
        for(i=0,j=n-1 ; ; )
            {
                mat[i][j] = mat[i][j-1];
                if(i >= j && i<n)
                {
                    j++;
                    if(j >= n)
                    {
                        j = n-1
                        break;
                    }
                }
                else
                {
                    j--;
                    if(j<0)
                    {
                        j = 0;
                        break;
                    }
                }

            if(i >= j && i<n)
                {
                    i++;
                    if(i >= n)
                    {
                        i = n-1;
                        break;
                    }
                }
                else
                {
                    i--;
                    if(i < 0)
                    {
                        i = 0;
                        break;
                    }

                }
            }
    }


    return 0;
}

#include<stdio.h>

int main()
{
    int r1,r2,c1,c2,i,j,k;
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    for(i=0 ; i< r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    for(i=0 ; i< r2 ; i++)
    {
        for(j=0; j<c2 ; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    int mat3[r1][c2];

    if(c1 == r2)
    {
        for(i=0 ; i<r1 ; i++)
        {
            for(j=0 ; j<c2 ; j++)
            {
                mat3[i][j] = 0;
                for(k=0  ; k<c1 ; k++)
                {
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }
         for(i=0 ; i<r1 ; i++ )
         {
            printf("\n");
            for(j=0 ; j<c2 ; j++)
            printf("%d ", mat3[i][j]);
         }
    }

    else
        printf("Matrix multiplication is not possible.");







    return 0;
}

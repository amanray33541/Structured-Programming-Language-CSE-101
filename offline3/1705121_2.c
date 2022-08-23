#include<stdio.h>

int main()
{
    int r1,c1,r2,c2,i,j,mode;
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];

    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }

    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];

    for(i=0 ; i<r2 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    if(r1==c2 && r2==c1)
    {
        for(i=0 ; i<r1 ; i++)
        {
            for(j=0 ; j<c1 ; j++)
            {
                if(mat1[i][j] == mat2[j][i])
                    mode=1;
                else
                    mode=0;
            }
        }
    }

    if(mode == 1)
        printf("Yes");
    else
        printf("No");


    return 0;
}

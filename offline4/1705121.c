#include<stdio.h>
#include<math.h>
int main()
{
    int x,s=0,i=0,j=0;
    do{
        scanf("%d", &x);
        if((x==0)||(x==1)){
        s=s+x;
        s=s*10;
        }
    }while((x==0)||(x==1));
    s=s/10;
    while(s==0){
        j=j+(s%10)*pow(2,i);
        i=i+1;
        s=s/10;
    }
    printf("%d",j);
    /*if((x==0)||(x==1))
        s=s+x*pow(2,i);
        i=i+1;
    }while((x==0)||(x==1));

    printf("%d",s);
    do{
        s=s/10;
        j=j+1;
    }while(s%10==0);
    printf(" %d",j);*/
}

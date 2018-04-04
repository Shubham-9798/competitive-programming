#include <stdio.h>
#include<string.h>

int main(void)
{
    int t;
    int b1,m1,r1,e1;

    while(t--)
    {
        scanf("%d",&t);
        for(int k=0;k<4;k++)
        {
            scanf("Barcelona %d",&b1);
            scanf("Malaga %d",&m1);
            scanf("RealMadrid %d",&r1);
            scanf("Eibar %d",&e1);

            if((b1==m1)&&(r1==e1))
                printf("draw");
            else if((r1<m1)&&(b1>m1))
                printf("Barcelona");
            else
                printf("RealMadrid");




        }
    }






    return 0;
}

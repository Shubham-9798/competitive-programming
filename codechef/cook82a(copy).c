#include <stdio.h>
#include<string.h>
int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
    char rm[20]="RealMadrid",bc[20]="Barcelona",ma[20]="Malaga",er[20]="Eibar";
    int rm1,bc1,ma1,er1,i;
    for(i=0;i<4;i++)
    {
    	char tm[20];
    	int s;
    	scanf("%s %d",tm,&s);
    	if(strcmp(tm,rm)==0)
    	rm1=s;
    	if(strcmp(tm,bc)==0)
    	bc1=s;
    	if(strcmp(tm,ma)==0)
    	ma1=s;
    	if(strcmp(tm,er)==0)
    	er1=s;
    }
    if((rm1>=er1) || (rm1<er1 && bc1<=ma1))
    printf("RealMadrid\n");
    else
    printf("Barcelona\n");
	}
	return 0;
}


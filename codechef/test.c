#include<stdio.h>
int main()
{
	int T,i=1,j,goal,b,m,e,r;
	char tn[20];
	scanf("%d",&T);
	while(i<=T)
	{
		for(j=1;j<=4;j++)
		{
	scanf("%s%d",&tn,&goal);
	if(strcmp(tn,"Barcelona")==0)
			 	{
			 		b=goal;
				 }
				 if(strcmp(tn,"Malaga")==0)
			 	{
			 		m=goal;
				 }
				 if(strcmp(tn,"RealMadrid")==0)
			 	{
			 		r=goal;
				 }
				 if(strcmp(tn,"Eibar")==0)
			 	{
			 		e=goal;
				 }
	}
	if(r<m&&b>e)
	{
		printf("Barcelona\n");
	}
	else
	{
		printf("RealMadrid\n");
	}
	i++;
	}
	return 0;
}

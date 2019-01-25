
#include <stdio.h>
#include<string.h>

int main(void)
{
    int t,k;
    int a,b,c,d;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
  if(a==b && c==d)
  	printf("YES\n");
  	else if(a==c && b==d)
  	printf("YES\n");
  	else if(a==d && b==c)
  	printf("YES\n");
  	else
  	printf("NO\n");

        printf("%d%d%d%d",a,b,c,d);



    }






    return 0;
}

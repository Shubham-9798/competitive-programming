//#include <stdio.h>
//#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>

int main()
{

   int *ptr;
   ptr=(int *)malloc(10 * sizeof(int));
   printf("%d",sizeof(int));
   printf("%d",ptr);


   int num=10,i=0;
   while(num--){
   scanf("%d",ptr+i);
   i++;
   }
   i=0;
   num=10;
 while(num--){
   printf("%d\t%d\n",*(ptr+i),ptr+i);
   i++;

 }
int n2;
     printf("\nEnter new size of array: ");
//    scanf("%d", &n2);
n2=6;
    ptr = realloc(ptr, 6);

 while(n2--){
   printf("%d\t%d\n",*(ptr+i),ptr+i);
   i++;

 }
 free(ptr);

   return 0;
}

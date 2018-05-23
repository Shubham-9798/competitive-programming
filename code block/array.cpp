

#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;
void fun(char *arr);
int main()
{

char arr[] = {'g', 'e', 'e', 'k', 's','\0', 'q', 'u', 'i', 'z'}; //where it find \0 it ternimate the string
   fun(arr);

    return 0;
}


void fun(char *arr)
{
   int i,j;
   unsigned int n = strlen(arr);

   printf("n = %d\n", n);
   for (i=0; i<n; i++)
     printf("%c  ", arr[i]);
}

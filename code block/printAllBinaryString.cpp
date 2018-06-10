#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

int main()
{


   char arr[5];
   //cout<<arr.lenght();
   //cin<<arr;
   gets(arr);
   if(arr[3]=='\0')
    cout<<"conatain null"<<endl;
   else
    cout<<"not conaton"<<endl;
   cout<<strlen(arr);
 //  for()

    return 0;
}

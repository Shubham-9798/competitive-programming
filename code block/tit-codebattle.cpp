
#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
  int test,dienum,i,j;

  cout<<"test case";
  cin>>test;
  while(test--){
        cout<<"number of die";
    cin>>dienum;
    int arr[dienum][6];



    for(i=0;i<dienum;i++)
        for(j=0;j<6;j++)
    {
        cin>>arr[i][j];

    }

   int temp;
   if(dienum==1)
     cout<<1;
   else
   {

   }



  }


    return 0;
}

#include<iostream>
using namespace std;

 int main(){
   //Number are from  1 to 49
   //Choose a subset of 6 Numbers
   int a[] = { 1,2,3,4,5,6,8,10,12 };
   int n = sizeof(a)/sizeof(int);
   int count = 0;
   for(int i=0;i<n-5;i++)
    for(int j=i+1;j<n-4;j++)
      for(int k=j+1;k<n-3;k++)
        for(int l=k+1;l<n-2;l++)
           for(int m=l+1;m<n-1;m++)
              for(int o=m+1;o<n;o++)
   {
       cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<" "<<a[l]<<" "<<a[m]<<" "<<a[o]<<endl;
       count++;

   }
   cout<<"Number of count is "<<count;
  return 0;
 }


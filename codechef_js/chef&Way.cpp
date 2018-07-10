#include<iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;

int func(vector<int> arr,int n,int k){
   int trav=arr[0];
   int min,pro=1;
   for(int i=1;i<n;i++){

     if((arr[i]-trav<=k)&&(arr[i]-trav>=1))
     {
         pro=pro*arr[0]*arr[i];
         trav=arr[i];

     }
   }
   return 0;
}
int main(){
  int n,k;
  int value;
  int mul=1;
  vector<int> arr;
  cin>>n>>k;

  for(int i=0;i<n;i++){
        cin>>value;
    arr.push_back(value);
  }

 int a=func(arr,n-1,k);


return 0;
}


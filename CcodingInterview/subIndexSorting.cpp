
#include<iostream>
#include<vector>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

int main(){
vector<int> arr;
vector<int> mid;
arr = {1,2,3,9,10,6,43,43,5,45,77,89};

int len = arr.size();
int fst=0,lst = len-1,ct=len-1;
cout<<lst<<"  "<<ct<<endl;
bool t=true,tt=true;
for(int i=0;i<len-1;i++){

  if((arr[i+1]>arr[i])&&(t)){
    fst++;
  }else
   t = false;

  if((arr[lst]>arr[lst-1])&&(tt)){
    ct--;
    lst--;
  }else
   tt=false;
}
cout<<fst<<"  "<<ct<<endl;
for(int j=fst+1;j<ct;j++){
    mid.push_back(arr[j]);
    cout<<arr[j]<<endl;
}


sort(mid.begin(), mid.end());
//sort(mid.begin()+fst+1,mid.end()-lst-1);
for(int k=0;k<mid.size();k++){
    //cout<<mid[k]<<endl;
}
//cout<<fst<<"  "<<ct;

return 0;
}

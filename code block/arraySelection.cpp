#include<iostream>
using namespace std;

//select any 2 pair of array
#define d 10000
 int main(){

 int ct=0,n;
 cin>>n;

 for(int i=0;i<n;i++)
      for(int j=i;j<n;j++){
       if(i!=j)
        {
          ct++;
       }



 }
 cout<<ct;
 return 0;
 }

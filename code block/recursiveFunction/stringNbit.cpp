#include<iostream>
#include<bits/stdc++.h>

using namespace std;
string A = "ppp";
void Binary(int n){

   if(n<1)
   {
    cout<<A<<endl;}
   else{
    A[n-1]='0';
    Binary(n-1);
    A[n-1]='1';
    Binary(n-1);
   }

}

int kstrings(int n,int k){
  int ct=0;
  if(n<1){ct++;
    cout<<A<<endl;}
  else{
    for(int j=0+48;j<k+48;j++){

        A[n-1]=(j);
        kstrings(n-1,k);
    }
  }
  return ct;
}

int main(){
  Binary(3);
  cout<<endl;
  int b=kstrings(4,3);
  cout<<b<<endl;
return 0;
}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

  int cA,cB,imd=0,t;

  int test;
  cin>>test;
  while(test--){
        t=0;
        cA=0;cB=0;t++;
     string str;
     cin>>str;
     int n=str.length();
     for(int i=0;i<n;i++){
         t++;
         if(str[i]=='A'){
           cA++;
           i++;
           while(str[i]=='.'){
            imd++;
  t++;
            i++;
           }
         if(str[i]=='A'){
            cA+=imd;
            t++;
         }
         imd=0;
         i--;
         }else if(str[i]=='B'){
           cB++;
           i++;
           t++;
           while(str[i]=='.'){
            imd++;t++;
            i++;
           }
           if(str[i]=='B')
            cB+=imd;
           imd=0;t++;
           i--;

         }
     }
     cout<<cA<<" "<<cB<<endl;
     cout<<"time is"<<t;
  }





return 0;

}

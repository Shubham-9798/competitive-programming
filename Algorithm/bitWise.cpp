#include<iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll fastModeExp(ll a, ll b){
   ll res=1;
   while(b>0){
    if(b&1) {
        res = (res*a);
    }
    a = a*a;
    b = b>>1;
   }

   return res;


}

int main() {
cout<<fastModeExp(3,2)<<endl;
cout<<"-------"<<endl;
cout<<pow(3,3);


return 0;
}

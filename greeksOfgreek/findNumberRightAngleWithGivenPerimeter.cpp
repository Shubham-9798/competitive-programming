#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// p should be even. //side<p/2 //  a = (p/2) * ((p-2b)/(p-b))
// try to make the prime triplet

int  countTri(int p){
int ct=0;


if(p%2!=0)
    return 0;
else{
    for(int b=1; b<p/2; b++){

    float a = (float(p)/2 )* (float(p - 2*b)/float(p-b));

    int check = int(a);
    if(check==a)
      {
        cout<<a<<"-->"<<b<<"----"<<p-a-b<<endl;
        ct++;
        }
      }
}
return  ct;

}

int main(){

 int p=20;
 cout<<"Number of Triangle "<<countTri(p);

return 0;
}

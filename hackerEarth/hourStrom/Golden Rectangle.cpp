
#include<iostream>
using namespace std;

int main(){
int test;
float a,b;
cin>>test;

while(test--){
    cin>>a;
    cin>>b;

    float c = a/b;
    float d = b/a;
    cout<<c<<"  "<<d<<endl;
    if((c>=1.6000000)&&(c<=1.70000000000))
        ct++;
    else if(d>=1.600000000 && d<=1.7000000000)
        ct++;

}
cout<<ct<<endl;



return 0;
}

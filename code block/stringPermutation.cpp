#include<iostream>
#include<cmath>
using namespace std;

int func(int a,int b,string str){
  //cout<<a<<"ddd"<<str;
  if((a==0)||(a==0))
    return 0;

  func(a,a-1,str);
  cout<<"["<<a<<"-->"<<b<<"]\n";
  //func(a,b-1,str);
}

//The Mandelbrot Set

int mand(int n){
   if(n == 0)
     return 1;
   //cout<<n<<endl;
   int val = pow(mand(n-1), 2) + 1;
   cout<<val<<endl;
   return 0;
}

int main(){
   string str="shu";
   int a=str.length();
   //cout<<func(a,a,str);
   cout<<mand(3);
   return 0;
}

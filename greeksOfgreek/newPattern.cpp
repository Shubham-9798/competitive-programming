#include<iostream>
using namespace std;

void printPat(int n)
{
//Your code here
  int times=n,j=1,tv;
  while(times){
    for(int i=n;i>=1;i--){
        while(j<=times){
            cout<<i<<" ";
            j++;
        }j=1;
    }
   cout<<"$";
   times--;
  }
}

int main(){
  printPat(4);
return 0;
}

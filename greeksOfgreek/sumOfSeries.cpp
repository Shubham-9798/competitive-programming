#include<iostream>
using namespace std;
//Find sum of the series 1+22+333+4444+…… upto n terms

int returnVal(int n){
    if(n==0)
        return 0;
  int i=n, sum=0,val;
  for(int j=0;j<n;j++){
    val = i+sum;
    sum=val*10;
  }

  return val + returnVal(n-1);
}


int main(){
int sum=0;
cout<<returnVal(5);



return 0;
}

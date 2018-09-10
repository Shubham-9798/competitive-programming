
#include<iostream>
using namespace std;
 void multiply(int *a,int &n,int no)
 {
    int ct=0;
    for(int i=0;i<n;i++){
        int prod = a[i]*no+ct;
        a[i] = prod%10;
        ct = prod/10;
    }
    while(ct){
        a[n] = ct%10;
        ct = ct/10;
        n++;
    }
 }
 void big_factorial(int number){
  int *a = new int[1000]{0};
  a[0] = 1;
  int n = 1;
  for(int i=2;i<=number;i++){
    multiply(a,n,i);
  }

  for(int p=n-1;p>=0;p--)
    cout<<a[p];
}
int main(){
  big_factorial(10); //5*4*3*2
return 0;
}

#include<iostream>
using namespace std;

int fib(int val,int init){

  return 0;

}
int main(){

int first = 1,second=1,val;
//fib using loop
for(int i=0;i<5;i++){
    val=first+second;
    first=second;
    second=val;
    cout<<val<<"\t";
}
cout<<endl;
cout<<fib(5,1);

}

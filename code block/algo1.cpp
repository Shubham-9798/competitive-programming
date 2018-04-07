

#include<stdio.h>
#include<iostream>
#include<fstream>

using namespace std;
void swap1(int* a,int* b);
void swap2(int& a,int& b);
int main()
{
//swap
  int a=10,b=20;
  cout<<&a<<"address"<<&b<<endl;
  swap(a,b);       //direct swap function//call by value
  cout<<&a<<"address"<<&b<<endl;
  cout<<a<<"and "<<b<<endl;

   swap1(&a,&b);//call by pointer

     cout<<&a<<" new address"<<&b<<endl;
  cout<<a<<"and "<<b<<endl;

  swap2(a,b);//call by ref
    cout<<&a<<"address"<<&b<<endl;
  cout<<a<<"and "<<b<<endl;

  return 0;
}

void swap1(int* a,int* b){
int t=*a;
     *a=*b;
     *b=t;

}

void swap2(int& a,int &b)//call by reference
{
   int temp=a;
      a=b;
      b=temp;

}

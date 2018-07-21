
#include<iostream>
using namespace std;

int main(){
  string str;
  int n,q;
  cout<<"Enter the value of n amd q"<<endl;

  cin>>n;
  while(n--)
  getline(cin,str);


 int ct=0;
 cout<<str<<endl;
  for(int i=0;i<str.length();i++)
  {
      if(str[i]=='\n')
        ct++;

  }
cout<<ct;
return 0;
}

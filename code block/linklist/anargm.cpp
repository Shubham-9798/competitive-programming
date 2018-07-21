#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool checkAnargm(string a,string b){
   int n1 = a.length();
   int n2 = b.length();

   if(n1!=n2)//length match
    return false;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

     cout<<a<<endl;
     cout<<b<<endl;
     if(a==b)
        return true;

   return false;
   }

int main(){
string str1="awerdfg";
string str2 = "aedgwrf";

if(checkAnargm(str1,str2))
  cout<<"it's Anargm";
  else
    cout<<"Not anragm";


return 0;
}

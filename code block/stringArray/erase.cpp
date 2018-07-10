#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){
  string s="abcd";
  int n = s.length();

 // s.erase(s.size()-1);//5-1
 s[2]=NULL;
 //*(s+2)=NULL
  cout<<s.length();
  cout<<s<<endl;

  //s.erase(2,1); // Deletes 4 characters from index number 1
  cout<<s.length();
  cout<<s<<endl;

return 0;
}

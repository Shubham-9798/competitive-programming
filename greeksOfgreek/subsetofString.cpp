#include<bits/stdc++.h>
#include<iostream>
#include<string>

using namespace std;

void powerSet(string str ,int index ,string cur){
  if(index==str.length())
    return ;

  cout<<cur<<"\n";
  for(int i=index+1;i<str.length();i++){
    cur+=str[i];
    powerSet(str,i,cur);

    cur.erase(cur.size()-1);
  }
    return ;
}


int main(){

    string cur="";
    string str="abc";
    powerSet(str,-1,cur);


return 0;
}

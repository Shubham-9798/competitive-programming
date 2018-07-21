#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include <iterator>

using namespace std;

int main(){
  map<char* ,int> mp1;
  map<char* ,int> mp2;
  map<char* ,int> ::iterator it;

  string str1 = "abcde";
  string str2 = "cdeab";

  if(str1.length()!=str2.length())
     return false;
  int n = str1.length();

  for(int i=0;i<n;i++){
      it=mp1.find(str1[i]);
      if (it != str1.end())
        str1.second=++(str1.second);
      else{
        str1.insert(std::make_pair(str1[i], 1));
      }

    it=mp2.find(str2[i]);
      if (it != str2.end())
        str2.second=++str2.second;
      else{
        str1.insert(std::make_pair(str2[i], 1));
      }
  }

    for (it = str1.begin(); it != str1.end(); ++it)
    {
        cout  <<  '\t' << it->first
              <<  '\t' << it->second << '\n';
    }
return 0;
}

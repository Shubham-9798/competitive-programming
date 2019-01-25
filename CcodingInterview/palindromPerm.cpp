#include<bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
unordered_map<char , int> arr{0};
unordered_map<char , int> :: iterator it;


string str = "abssaaabccdede";
int len = str.length();
cout<<len;
for(int i=0;i<len;i++){
    arr[str[i]]++;
}

for(auto it=arr.begin();it!=arr.end();it++){
    cout<<it->first<<"____"<<it->second<<endl;
    if(it->second%2);
}

return 0;
}

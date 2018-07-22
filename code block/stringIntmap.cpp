#include <cmath>
#include <cstdio>
#include <vector>
#include<map>
#include<iterator>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    map<string , int> mp;
     map<string , int>::iterator it;

    int t,key;
    string str;
    cin>>t;
    int p=t;
    while(t--){
        cin>>str>>key;
        mp.insert(pair <string, int> (str, key));
    }
    while(p--){
            cin>>str;
          it = mp.find(str);
  if (it != mp.end())
      cout<<it->first<<"="<<it->second<<endl;
    else{
       cout<<"Not found";
    }
}
    return 0;
}

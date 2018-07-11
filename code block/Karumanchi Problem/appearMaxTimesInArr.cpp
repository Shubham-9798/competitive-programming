#include<iostream>
#include<map>
#include <iterator>
#include<bits/stdc++.h>

using namespace std;

//first approach is brute force approach
int main(){
  int arr[]={1,2,3,1,2,1,4};
  int n=6;

  map<int,int> mp;
 std::map<int,int>::iterator it;

  for(int i=0;i<7;i++){
    it=mp.find(arr[i]);
    if(it!=mp.end()){
            cout<<"repeat"<<endl;
        it->second=(it->second+1);
    }else{
        cout<<"insert"<<endl;
        mp.insert(pair <int, int> (arr[i], 1));
    }

  }
  it = std::max_element(mp.begin(), mp.end());
  cout<<it->first<<" ---> "<<it->second<<endl;

         for (map<int,int>::iterator i = mp.begin(); i != mp.end(); i++) {
        std::cout << i->first << " : " << i->second << '\n';
    }

return 0;
}

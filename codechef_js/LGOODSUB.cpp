// CPP program to create an empty vector
// and one by one push values.
#include <bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;

int main(){
   short int test;
   unsigned int n,ct=0;
   long int val,dub;
   vector<long int> arr;
   map <int, int> mp;
  // cout<<"test acase"<<endl;
   cin>>test;

   while(test--){
        arr.clear();
        mp.clear();
        //cout<<"number of element in array"<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>val;
            arr.push_back(val);
        }

  /*  for(auto i=arr.begin(); i != arr.end()-1; ++i)
    {
        if(*i==*(i+1))
        {
            arr.erase(i);
           i--;
        }
    }*/

          for (auto it = arr.begin(); it != arr.end(); ++it)
        cout << ' ' << *it;
cout<<endl;
        for(int k=0;k<arr.size();k++)
         for(int j=k+1;j<arr.size();j++){
             if(arr[k]>arr[j])
                {
                 mp.insert(pair <int, int> (arr[k] ,j-k));

                }
        }
        cout<<mp.size()<<endl;

   }

return 0;
}

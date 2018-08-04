//produce all the factor of given element in defined range
#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,4,18,16};
    vector<int> factor;
    int limit=36,j,k=0;

    int minArr=*min_element(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
            j=1;cout<<"\n";
          while(k<=limit/2){
             k=arr[i]*j;
              if((limit)%(k)==0){
                 factor.push_back(k);cout<<k<<endl;}//extra 2 is printing in this case
                j++;
          }
          k=0;cout<<endl;
    }
cout<<endl;
     for(int i=0;i<factor.size();i++){
        cout<<factor[i]<<endl;
     }

    cout<<minArr;

return 0;
}

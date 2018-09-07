#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;
//There are no right triangles are possible for odd p as right angle triangles

int main(){
vector<int> arr{10, 4, 6, 12, 5};
    // Square array elements
    int sz = arr.size();
    for (int i=0; i<sz; i++)
        arr[i] = arr[i]*arr[i];

    sort(arr.begin(),arr.begin()+5);
    int fix=sz-1;
    for(int first=0;first<sz;first++){
       for(int snd=first;snd<sz;snd++){
           if(arr[first]+arr[snd]==arr[fix])
            cout<<arr[first]<<"  "<<arr[snd]<<"  "<<arr[fix]<<endl;
       }fix--;
    }

    //value in array
    for (auto const &element : arr)
        cout << element << " " ;
return 0;
}

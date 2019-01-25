#include<iostream>
#include<bits/stdc++.h>
#include <algorithm>
#include<vector>
using namespace std;
//There are no right triangles are possible for odd perimeter as right angle triangles

int main(){
vector<int> arr{10, 4, 6, 12,8, 5};
    // Square array elements
    int sz = arr.size();
    for (int i=0; i<sz; i++)
        arr[i] = arr[i]*arr[i];

    sort(arr.begin(),arr.begin()+sz);
    int fix=sz-1;
    for(int first=0;first<sz-2;first++){
       for(int snd=fix;snd>=0;snd++){
           if(arr[first]+arr[first+1]==arr[snd])
            cout<<arr[first]<<"  "<<arr[first+1]<<"  "<<arr[snd]<<endl;
       }
    }

    //value in array
    for (auto const &element : arr)
        cout << element << " " ;
return 0;
}

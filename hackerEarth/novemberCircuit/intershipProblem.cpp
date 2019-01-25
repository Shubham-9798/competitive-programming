#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    std::vector<int>::iterator it;
int test;
int n,a,b,k;
cin>>test;

while(test--){
    cin>>n>>k;
    //int *arr = new int[n]{0};
    vector<int> arr(n);
    while(k--){
      cin>>a>>b;
    for(int i=a-1;i<b;i++){
            //cout<<arr[i];
        if(arr[i]==0)
            arr[i]=1;
        else{
            arr[i]=0;
        }
    }
    }
    for(it = arr.begin();it!=arr.end();it++)
        cout<<*it<<"#"<<endl;
    it = std::find (arr.begin(), arr.end(), 0);
    if (it != arr.end())
    {
        cout<<"NO"<<endl;
    }
    else
        std::cout << "yes"<<endl;



}

return 0;
}

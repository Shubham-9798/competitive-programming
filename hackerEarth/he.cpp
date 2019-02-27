#include <iostream>
#include<vector>
#include<map>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
    ll test,ct=0, val, S;
    vector<int> X;
    vector<int> Y;
    cin>>test;
    ct=test;
    ll c=test;
    while(c--) {
        cin>>val;
        X.push_back(val);
        cin>>val;
        Y.push_back(val);
    }
    cin>>S;

    map<int, int> mp;
    for(ll i=0;i<test;i++){
        for(ll j=0;j<test;j++){
           if(i==j) continue;

            mp[i+j]=1;
           if(mp[i+j]==1)
            cout<<i+j<<"\t";

           val = X[i]-X[j]+Y[i]-Y[j];
           if(val==S)
              ct++;
        }
    }
    cout<<ct;

    // for(ll i=0)
    sort(X.begin(),X.end());
    for(int i=0;i<test-1;i++)
    {
        X[i]=abs(X[i]-X[i+1]);
        int ans=(i+1)*(test-i-1)*X[i];
        cout<<ans<<"\n";
    }

    return 0;
}

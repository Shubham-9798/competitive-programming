
#include <iostream>
#include<vector>
#include<algorithm>
#define ll long long
using namespace std;
int main() {
    ll test,ct=0, val, S;
    vector<int> X;

    cin>>test;
    ct=test;
    ll c=test, ans=0;
    while(c--) {
        cin>>val;
        X.push_back(val);
    }

    // for(ll i=0)
    sort(X.begin(),X.end());
    for(int i=0;i<test-1;i++)
    {
        X[i]=abs(X[i]-X[i+1]);
         ans+=(i+1)*(test-i-1)*X[i];
        cout<<(i+1)*(test-i-1)*X[i]<<"sssss\n";
    }
    cout<<ans;
    return 0;
}

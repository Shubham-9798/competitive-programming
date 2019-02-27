
#include<vector>
#include<algorithm>
#include<iostream>

#define ll long long
#define rep(x,t,n) for(ll x = t; x < n; x++)
#define fast() ios_base::sync_with_stdio(false); cin.tie(NULL);


using namespace std;

int main() {
    fast();

    ll N, val;
    cin>>N;

    vector<ll> arr;
    ll n=N, sum=0;

    while(N--) {
        cin>>val;
        arr.push_back(val);
    }

    sort(arr.begin(),arr.end());
    for(int i=0;i<n-1;i++)
    {
        arr[i]=abs(arr[i]-arr[i+1]);
        sum+=(i+1)*(n-i-1)*arr[i];
    }
    cout<<sum<<"\n";
    return 0;
}

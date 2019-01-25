

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define rep(x,t,n) for(ll x = t; x < n; ++x)
#define repe(x,t,n) for(ll x = t; x <= n; ++x)
#define dec(x,t,n) for(ll x = t; x >= n; --x)
#define iter(it,x) for(auto it : x)
#define nl cout<<'\n';
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define imax INT_MAX
#define imin INT_MIN
#define f first
#define s second
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define so(x) sizeof(x)
#define mod 1000000007
#define N 100000

using namespace std;



int main() {

    ll t,n,val;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> arr;


        for(ll i=0;i<n;i++){
            cin>>val;
            arr.push_back(val);
        }
        sort(arr.begin(), arr.end());
		val = arr[1]-arr[0];
		for(ll i=1;i<n-1;i++)
		{
			if((arr[i+1]-arr[i])<val)
				val=arr[i+1]-arr[i];
		}
		cout<<val<<"\n";
    }


    return 0;
}

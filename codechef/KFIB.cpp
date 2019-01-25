
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

ll fun(ll n, ll k, ll &sum) {


  if(n<=k)
  {

    sum = sum + n;
    //cout<<sum<<"  ";
    return 0;
  }else if(n>k)
   fun(n-1, k,sum);



}

int main() {
    ll n,k;
    cin>>n>>k;
    ll sum = 0;
    cout<<fun(n,k,sum);


    return 0;
}

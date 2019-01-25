#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define bl bool
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
/*
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
*/
    ll test,a,b;
    cin>>test;
    while(test--){
        cin>>a>>b;
        ll p=a,q=b;
        ll err = 0;
        bl t = true;
        ll j=1;
        while(t){
            if(p==0 && q==0)
                t = false;
            ll n1 = p%10;
            ll n2 = q%10;
            ll val = n1+n2;
            cout<<n1<<" "<<n2<<endl;
            cout<<val<<"DD"<<endl;
            val = val%10;

            err = val*j +err;
            j = j*10;
            p = p/10;
            q = q/10;

        }
        cout<<a+b<<"  "<<err<<endl;
        cout<<abs(err - (a+b));
        cout<<"-----------------"<<endl;
    }





    return 0;
}

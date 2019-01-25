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
#include<iostream>
using namespace std;

int main(){
    int n=1000000;
    vector<int> cache(n);
    int t,val,k=0;
    cin>>t;
    cache[1]=1;
    repe(i,2,n){

        val=i;
        while(val!=1&&val>i){
            k++;
            if(val%2==0){
                val=val/2;
            }else{
               val=3*val+1;

            }
        }
        cache[i]=k+cache[val];
        ///Check if sequence is the best solution

    }
    while(t--){
    cin>>val;
    cout<<cache[val];nl

    }




return 0;
}

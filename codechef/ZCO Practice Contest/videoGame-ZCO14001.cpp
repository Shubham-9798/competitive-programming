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
#define Nn 100000

using namespace std;

int main() {
    ll len, hgt, val;

    cin>>len>>hgt;
    ll l=len;

    vector<ll> arr;
    vector<ll> query;

    arr.push_back(0);

    while(l--) {
        cin>>val;
        arr.push_back(val);
    }

    for(auto i: arr) { cout<<i<<"\t"; }

    while(true) {
        cin>>val;
        query.push_back(val);
        if(val==0)
            break;
    }

    ll curr = 1;
    ll lft,rgt,pick,w=1;

    for(auto q: query) {
        if(q==0) break;

        if(q==1 && w) { lft = curr-1; if( lft>=1 && lft<=len) { // cout<<"move left\t";
        curr=lft; } } //arr[curr]--; arr[lft]++; arr[lft]<=arr[curr] &&
        else if(q==2 && w) { rgt = curr+1; if( rgt>=1 && rgt<=len) { //cout<<"move right\t";
                curr==lft;} } //move right arr[curr]--; arr[rgt]++; arr[rgt]<=arr[curr] &&

        else if(q==3 || q==2 ||q==1 ||q==4) {
                                              if(q==4 && w!=0) {continue;}

                                              w=0; if(q==3) {pick=curr; }
                                              if(q==2) {rgt=curr+1; if(rgt>=1&&rgt<=len){
                                                    //cout<<"mv rgt\n";
                                              curr=rgt; } }
                                              else if(q==1) { lft=curr-1; if(lft>=1&&lft<=len){
                                                    //cout<<"mv lft\n";
                                                    curr=lft; } }
                                              cout<<"current\t"<<curr<<"\n";

                                              if(q==4 && w==0) {   {
                                                    //cout<<"drop"<<arr[curr]<<" "<<hgt<<"\n";
                                              if(arr[curr]<hgt)arr[curr]++; else arr[pick]--; }  w=1;}



        }

    }
    ll a=1;
    for(auto i: arr) { if(a=0) cout<<i<<"\t";  a=0;}

    return 0;
}

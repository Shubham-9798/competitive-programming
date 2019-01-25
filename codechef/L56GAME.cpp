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
    int t,val,n;
    int odd=0,even=0;

    cin>>t;
    while(t--){
      cin>>n;
      rep(x,0,n){
        cin>>val;
        if(val%2==0)
            even++;
        else
            odd++;
      }

      if(even!=0)
      even=1;
      else
      even=0;

      if(odd==0){
        odd=0;
      }
      else if(odd==1)
      {
          odd=1;
          //cout<<odd+even<<endl;
      }else if(odd%2==0) ///Odd number even number of times
        {even=1;odd=0;

      }else if(odd%2!=0){ ///odd number odd times
          even=1;
          odd=1;
      }


        cout<<odd+even<<endl;
        odd=0;even=0;


    }
    return 0;
}

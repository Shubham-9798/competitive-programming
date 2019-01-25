#include<iostream>
#define ll long long
using namespace std;
int main() {
ll t;
cin>>t;
//int n = (1<<8)-1;

while(t--) {
    ll n;
    cin>>n;
    ll subset = (1<<8)-1;
    int ans=0;
    for(ll i=1;i<subset;i++){
            ll denom = 1ll;
            ll setBits = __builtin_popcount(i);

            for(ll j=0;j<8;j++){
                if(i&(1<<j))
                    denom = denom*primes[j];
            }

            if(setBits&1)
                ans+=n/denom;
            else
                ans-=n/denom;


    }

}

return 0;

}

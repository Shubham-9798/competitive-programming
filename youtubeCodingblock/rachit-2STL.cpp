#define ll long long

#include<iostream>
#include<map>
#include<vector>
#include<unordered_map>
using namespace std;

int main() {
    ll n,S=0;
    cin>>n;

    vector<ll> arr(n+5, 0);
    for(ll i=0;i<n;i++) { cin>>arr[i]; S+=arr[i];}

    if(S&1) {cout<<"NO"<<endl; return 0;}

    map<ll, int> first, second;
    first[arr[0]] = 1;

    for(ll i=1;i<n;i++) {second[arr[i]]++;}

    ll sdash = 0;
  //  for(auto x:second){
  //cout<<x.first<<"  "<<x.second<<endl;
  //}

    for(ll i=0;i<n;i++) {

        sdash +=arr[i];
        if(sdash == S/2) {cout<<"YES"<<endl;}

        if(sdash<S/2) {
             //cout<<"sdash<S/2"<<endl;
             ll x= (S/2)-sdash; //3-1
             //cout<<x<<" " << S<<" "<< sdash<<"-----\n";
             if(second[x]>0) {
                cout<<"YES\n";
                return 0;
             }

        } else { ///sdash>S/2
            cout<<"sdash>S/2"<<endl;
              ll y = sdash-S/2;
              if(first[y]>0){
                cout<<"YES\n";
                return 0;
              }

        }
            second[arr[i+1]]--;
            first[arr[i+1]]++;
    }


cout<<"NO\n";
return 0;
}

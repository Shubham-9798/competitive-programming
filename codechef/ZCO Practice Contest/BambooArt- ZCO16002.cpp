
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

#define ll long long
#define rep(i,val,n) for(int i=val;i<n;i++)

using namespace std;

int main() {
ll n,val;
cin>>n;
vector<ll> arr;
map<ll, vector<ll>> mp;

while(n--) {
    cin>>val;
    arr.push_back(val);
}
sort(arr.begin(), arr.end());
rep(i,0,arr.size()) {
  rep(j,i+1, arr.size()) {
     mp[abs(arr[j]-arr[i])].push_back(arr[j]);
  }
}

for ( const auto &p : mp ) // small size
{
    int dif = p.first;
    cout << p.first << " :";
    for ( const auto &s : p.second )
    {
        cout << ' ' << s;
    }
    cout << endl;
}

int ct = 1;
for ( const auto &p : mp ) // small size
{
    int dif = p.first;
    //cout << p.first << " :";
    for ( const auto &s : p.second )
    {   //cout<<p.second.size()<<"\n";
        for(int j=1;j<p.second.size();j++) {

        }
    }
    cout << endl;
}
return 0;
}

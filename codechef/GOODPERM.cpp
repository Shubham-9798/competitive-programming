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
template<typename x>
auto adj_function(x first,x last){
  auto num = 0;
  auto it = first;
  while(true){
    it = adjacent_find(it, last, [](auto a,auto b){return b>a;});
    if(it == last)return num;
    num++;it++;
  }
}


int main() {
    vector<int> :: iterator it;
      int t;
      int n,k;

      cin>>t;
    while(t--){
       cin>>n>>k;
       vector<int> a(n),b;
       rep(i,0,n)cin>>a[i];
       repe(i,1,n){
         if(find (a.begin(), a.end(), i)==a.end())
            b.push_back(i);

       }
    int sum=0;
    do {
     //std::cout << b[0] << ' ' << b[1] << ' ' << b[2] << '\n';
     auto d=a;
     rep(i,0,n)if(d[i]==0)d[i]=b[i];
     if(adj_function(d.begin(),d.end())==k)sum++;

    } while ( std::next_permutation(b.begin(),b.end()) );
    cout<<sum;

       //iter(it,b)cout<<it<<endl;

    }
        // Sorted Array with a repeated element
    //int A[] = { 10, 13, 13, 18, 18 };

    // Size of the array
    //n = sizeof(A) / sizeof(A[0]);

    // Iterator pointer which points to the address of the repeted element
    //auto * itr = std::adjacent_find(A, A + n);

    // Printing the result
    //std::cout << *itr<<"$%%";


    return 0;
}

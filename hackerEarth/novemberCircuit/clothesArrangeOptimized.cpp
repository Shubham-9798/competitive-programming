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
#define vi vector<int>
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define so(x) sizeof(x)
#define mod 1000000007
#define N 100000
///#define it unordered_map<ll, string>:: iterator it;
using namespace std;
    unordered_map<ll, string> arrPtr;
    unordered_map<ll, string>:: iterator it;


void insertArr(int val, int i){
   string str = to_string(i);
        it = arrPtr.find(val);
    if ( it == arrPtr.end() ) {
         // not found
         arrPtr.insert(make_pair(val, str));
       } else {
             // found
              cout<<"found"<<endl;
              //cout<<it->s<<"  "<<endl;
              //string st = it.second;
              str = it->s + str;
              cout<<str<<endl;
              it->s = str;
     }

}


int main() {

    /// map problem


    int val,n, pos=0;
    string str;

    cin>>n;
    for(int i=n;i>0;i--){
        cin>>val;
        pos = i;
        insertArr(val,pos); /*
        str = to_string(i);
        it = arrPtr.find(val);
    if ( it == arrPtr.end() ) {
         // not found
         arrPtr.insert(make_pair(val, str));
       } else {
             // found
              cout<<"found"<<endl;
              //cout<<it->s<<"  "<<endl;
              //string st = it.second;
              str = it->s + str;
              cout<<str<<endl;
              it->s = str;
     }*/
}

/// query running 1->add 2-> pop
    int qry;
    int a,b;
    cin>>qry;
    while(qry--){
        cin>>val; /// Type of query
        if(val == 1) /// push only
        {
        cout<<"query 1 is called out"<<endl;
        cin>>a;
        pos++;
        insertArr(a, pos);

        }else{
        cout<<"query 2 is called out"<<endl;
        cin>>a>>b;
        cout<<arrPtr[a];


        }
    }



    iter(it,arrPtr){
      cout<<it.f<<"  "<<it.s<<endl;
    }








    return 0;
}

#define ll long long
#define rep(x,i,n) for(int x=i;x<n;x++)

#include<bits/stdc++.h>
using namespace std;

int main() {
int val;
int n,q;
cin>>n>>q;

vector<int> arr(n+1);
vector<int> ::iterator it;
rep(x,1,n+1){
    cin>>val;
arr[x]=val;
}

int qt,l,m;

rep(x,0,q) {
cin>>qt>>l>>m;

if(qt==1) {
  arr[l]=m;

}else if(qt==2){
    //cout<<"q2\n";
    val=0;
  int ct=0;
  rep(x,1,l+1){
  ct = ct^arr[x];
    if(ct==m){
    val++;
  }
  }

  cout<<val<<"\n";
}

}
return 0;
}

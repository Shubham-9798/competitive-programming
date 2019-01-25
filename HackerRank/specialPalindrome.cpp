
#include<iostream>
using namespace std;

long substrCount(int n,string s){
  int pre,nex;
  int ct=0;
  char cp = s[0];
  for(int i=1;i<n;i++){
    bool t=true;
    int j=1;
    while(t){
        pre = i-j;
        nex = i+j;
        /// Terminating Conditions
        if(pre<0 || nex>n-1)
            break;

        if(s[i]!=s[nex]&&s[i]!=s[pre]&&s[nex]==s[pre])
            {
                ct++;
                cout<<s[pre]<<s[i]<<s[nex]<<endl;
                }

      j++;
    }
   t = false;

  }



return ct+n;
}

int main(){
    int n;
    cin >> n;

    string s;
    //getline(cin, s);
    cin>>s;

    long result = substrCount(n, s);
    cout<<result<<endl;

return 0;
}

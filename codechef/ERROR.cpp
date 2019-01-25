#include<iostream>


using namespace std;
int main(){
//ios_base::sync_with_stdio(false);
//cin.tie(NULL);

short int test;
//cout<<"testCase\n";
cin>>test;
string str;

while(test--){
        int t=0;
   cin>>str;
   int n=str.length();
   //cout<<n<<"\n";
   if(n<=2)
    cout<<"Bad";
   else{
     for(int i=0;i<n-2;i++){
           // cout<<str[i]<<str[i+1]<<str[i+2]<<"\n";

        if((str[i]=='1'&&str[i+1]=='0'&&str[i+2]=='1')||(str[i]=='0'&&str[i+1]=='1'&&str[i+2]=='0'))//010,101
            {
               // cout<<"t is"<<t;
                t=1;break;
            }
     }
     if(t==1)
        cout<<"good\n";
     else
        cout<<"Bad\n";


   }


}


return 0;
}

#include<iostream>
#include <typeinfo>
#include<vector>

using namespace std;

int main(){


int test,arr;
string str;
string head;
cout<<"Number of test case"<<endl;
cin>>test;
int n;

while(test--){
   cout<<"enter string size"<<endl;
   cin>>str;
   //main code
    for(int i=0;i<str.length();i++){
        head = str[i];
        if((str[i+1]-str[i])==1)
            cout<<"correct"<<endl;
        else{

        }
    }

}


for(int i=0;i<n;i++){
    cout<<str[i]<<endl;
}

//cout<<char('s'-'r');
//cout<<('f'-'a');
//cout << typeid('s').name() << endl;//retunc b,i,c in shor form
return 0;
}

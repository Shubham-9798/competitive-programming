//

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
char a[] = "k-lkdlk-dkjd-mk-";

int len = strlen(a),p=0,k=0;
int an[len];
//char aNew[len] ;
string aNew="";
//char *aNew;
int ct=0;
for(int i=0;i<len;i++){
    if(a[i]=='-'){
        cout<<a[i];
        aNew = a[i]+aNew;
        //aNew[ct] = '-';
        //ct++;
        }else{
        cout<<a[i];
        }

}
cout<<endl;
for(int i=0;i<len;i++){
    if(a[i]!='-')
     //aNew[ct]=a[i];
     //ct++;
     aNew =  aNew + a[i] ;
}
cout<<endl;
cout<<aNew;

return 0;
}

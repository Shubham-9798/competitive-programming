#include<iostream>
using namespace std;

int main(){//complexity n3

int arr[10]={1,2,3,4,5,6,7,8,9,0};
int k=0;

for(int k=10-1;k>=0;k--){
for(int i=0;i<=9;i++){
    cout<<"\n";
    for(int j=i;j<k;j++){
         if(k-i==1)
            continue;
        cout<<arr[j];
    }





}}


cout<<"@@@@@@@@@@@@@@";
for(int i=10-1;i>=0;i--){
    cout<<"\n";
    for(int j=0;j<i;j++){

        cout<<arr[j];
    }


}


cout<<"@@@@@@@@@@@@@@";

    int i=9;
    for(int j=0 ;j<i;j++,i--){

        cout<<arr[j];
    }


return 0;
}

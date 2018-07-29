#include<iostream>
#include<vector>
#include<stdlib.h>


using namespace std;

int* checkOdd(vector<int> arr , int n){
    int *a;
    a = (int *)malloc(sizeof(int*)*2);
    int ev=0 ,od=0;
   for(int i=0;i<n;i++){
    if(arr[i]%2==0)
        ev++;
    else
        od++;
   }
   *a=ev;
   *(a+1) = od;

   return a;
}

int main(){
    vector<int>  arr;


  int t,n;
  //cout<<"Number of test case"<<endl;
  cin>>t;

 while(t--)
 {
     int val;
     cin>>n;
     for(int i=0;i<n;i++){
        cin>>val;
        arr.push_back(val);
     }
     int *a=checkOdd(arr,n);
     //checkEven(arr);
     //cout<<*a<<endl;
     //cout<<*(a+1)<<endl;
if(*(a+1)%2==0)
cout<<"1\n";
else
cout<<"2\n";
}




return 0;
}

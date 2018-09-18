#include<iostream>
#include<algorithm>
using namespace std;

template<class T>
void print(T arr[],int n)
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}

bool isHigh(int val){
if(val<=6)
    return true;
    return false;
}
int main(){
 int arr[] = {1,2,3,4,5,6,9,77};
 int n = sizeof(arr)/sizeof(int);
 //char arrN[] = "acb";
 print(arr,n);
 remove_if(arr,arr+n, isHigh);
 cout<<endl;
 //n = sizeof(arr)/sizeof(int);
 //two element left after removing less then 6
 print(arr,2);
return 0;
}

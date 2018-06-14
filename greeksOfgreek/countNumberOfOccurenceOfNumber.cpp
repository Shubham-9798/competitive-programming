// C++ program to count of index pairs with
// equal elements in an array.
#include<bits/stdc++.h>
#include<iostream>

using namespace std;


// Driven Program
int main()
{
    int arr[] = {1, 1, 2,2,1,3,4,100,4,3,44,91,44,33,91,22,44,0,0,5,-1,91,0,5};
    int n=sizeof(arr)/sizeof(*arr);
    cout<<n;

    sort(arr,arr+n);
    cout<<endl;
    for(int i=0;i<n;i++){

        cout<<arr[i]<<endl;
    }
    int *ptr = (int *)malloc(sizeof(int)*2);
 cout<<endl;
    int p=arr[0],j=0,s=1;;
    for(int i=1;i<n;i++){

        if(p==arr[i]){
            s++;

        }else{
            cout<<s<<"###";
            *(ptr+j)=s;
            j++;
            p=arr[i];
            s=1;
        }
    }
    //j++;
    *(ptr+j)=s;
    //cout<<s<<"#ddd##";
 cout<<endl;
 cout<<j<<"SS";
 cout<<endl;
     for(int i=0;i<j+1;i++){

        cout<<*(ptr+i)<<endl;
    }

}

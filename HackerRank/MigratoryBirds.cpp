#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// Complete the migratoryBirds function below.
int migratoryBirds(int ar[]) {
    int n=6;
    sort(ar,ar +n);int i;

    int max=1,m=ar[0],maxN=1;
    for(i=1;i<n;i++){
        if(m==ar[i])
         {
            max++;

            }else{
            if(maxN<max){
                maxN=max;
            }
            m=ar[i];
            max=1;
        }



    }
    return i;

}


int main(){
    int arr[]={1 ,4, 4, 4, 5, 3};
cout<<migratoryBirds(arr);

return 0;
}



#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main(){
int arr[20][20];

for(int i=0;i<20;i++)
  for(int j=0;j<20;j++){
    arr[i][j] = i+j;
}

long long m[6];
m[0] = -1;
for(int i=3;i<=16;i++){
    for(int j=3;j<=16;j++){
            cout<<arr[i][j]<<'\t';
             m[1] = arr[i][j]*arr[i][j+1]*arr[i][j+2]*arr[i][j+3]; ///right.
             m[2] = arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j]; ///down
             m[3] = arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j]; ///up
             m[4] = arr[i][j]*arr[i][j-1]*arr[i][j-2]*arr[i][j-3]; ///left.
             m[5] = arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3]; /// diagonally  left
             m[6] = arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3]; /// diagonally right

        }
        cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<" "<<m[3]<<" "<<m[4]<<" "<<m[5]<<" "<<endl;
        int max1 = *max_element(m,m+6);
        cout<<max1<<endl;
        if(m[0]<max1)
            m[0] = max1;
}
cout<<m[0]<<endl;
return 0;
}

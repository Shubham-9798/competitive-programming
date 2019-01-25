#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[] = {2,3,34,4,45,0,-5,19};
int len = sizeof(arr)/sizeof(len);
//cout<<len;
int maxN = INT_MIN;
int fst,scnd,thrd;
int maxI = NULL;

for(int i=0;i<len;i++){

  if(maxN<arr[i])
    {maxN = arr[i];
     maxI = i;
    }

    fst=maxN;
}
return 0;
}

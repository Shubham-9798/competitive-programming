#include <bits/stdc++.h>

using namespace std;
int gbl;


// Complete the migratoryBirds function below.
int migratoryBirds(int *ar,int i,int maxN) {
    int n=sizeof(ar)/sizeof(*ar);
    int ct;
    if(i==5)
        return 0;

    for(int k=0;k<n;k++){
        if(ar[k]==i){
            ct++;
        }
        if(maxN<ct)
        {
            maxN=ct;
            ct=0;
            gbl=i;
        }
    }
    i++;
    migratoryBirds(ar, i, maxN);
    return 0;

   // return 0;
}

int main()
{
    int ar[]={1,4,4,4,2,2,2,1,1,1,1,1,1,1,1,1,1,3,3,3,3,3};
    int i=1,maxN=0;
    migratoryBirds(ar, i, maxN);
    cout<<gbl;

    return 0;
}

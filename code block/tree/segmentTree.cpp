#include <cmath>
#include <cstdio>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;

void buildTree(int *tree,int *a,int index,int s,int e){
    if(s>e)
        return;

    if(s==e)
       {
        cout<<"the equal"<<s<<"  "<<e<<endl;
        tree[index] = a[s];
         return ;
     }
    //recursive case
    int mid = (s+e)/2;
    /// Left Tree  Build
    buildTree(tree,a,2*index,s,mid);

    /// Right Tree Build
     buildTree(tree,a,2*index+1,mid+1,e);
      cout<<s<<"  "<<e<<endl;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int a[7]={1,2,3,4,5,6,7};
    int mid = 5/2;
    int *t = new int[4*7+1];
    buildTree(a,t,1,0,6);
    for(int i=0;i<=20;i++){
        cout<<t[i]<<" val "<<endl;
    }
    delete (t);

    return 0;
}


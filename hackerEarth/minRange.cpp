

// Sample code to perform I/O:

#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void buildTree(int *tree,int *a,int index,int s,int e){
    if(s>e)
        return;

    if(s==e){
        tree[index] = a[s];
         return ;
    }
    //recursive case
    int mid = (s+e)/2;
    /// Left Tree  Build
     buildTree(tree,a,2*index,s,mid);

    /// Right Tree Build
     buildTree(tree,a,2*index+1,mid+1,e);

    int left = tree[2*index];
    int right = tree[2*index+1];

    tree[index] = min(left,right);
}

int query(int *tree,int index,int s,int e,int qs,int qe){
 /// three case

 ///overlap
   if(qs>e||qe<s)
    return INT_MAX;

   ///completed overlap
   if(s>=qe&&e<=qe)
      return tree[index];

   ///partial Overlap
   int mid = (s+e)/2;
   int leftAns = query(tree,2*index,s,mid,qs,qe);
   int rightAns = query(tree,2*index+1,mid+1,e,qs,qe);
   return min(leftAns,rightAns);
}
int main(){

    int a[] = {1,3,2,-2,4,5};
    int n = sizeof(a)/sizeof(int);
    int s=0,e=n-1;

    //Build tree
    int *tree = new int(4*n+1);
    buildTree(tree,a,1,s,e);
    /// minimu for 0-5,and other

    ///create testcase
    cout<<query(tree,1,s,e,2,4);


return 0;
}

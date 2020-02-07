







/// there is something woring in this code

/*
#include<iostream>
using namespace std;
int a[]={1,-2,0,3};
void build(int *arr,int index ,int s, int e){
    if(s>e)
        return ;

   if(s==e){
    arr[index] = a[s];
    ///cout<<index<<"-->"<<arr[index]<<endl;
    return ;
   }
   int mid = (s+e)/2;
   //cout<<s<<"   "<<e<<endl;
   build(arr,2*index,s,mid);
   build(arr,2*index+1,mid+1,e);

   int left = arr[2*index];
   int right = arr[2*index+1];

   arr[index] = min(left, right); //do sum of it also

}
/// return a min element from tree lying in the tree
int query(int *tree,int index,int s,int e, int qs,int qe){
  ///no overlap
  if(qs>e||qe<s)
    return INT_MAX;

  ///complete Overlap
  if(s>=qs && e<=qe){
     return tree[index];
  }

   ///partial Overlap
   int mid = (s+e)/2;
   int leftAns = query(tree,2*index,s,mid,qs,qe);
   int rightAns = query(tree,2*index,mid+1,e,qs,qe);

   return min(leftAns,rightAns);
}

int main() {
    // Enter your code here. Read input from STDIN. Print output to STDOUT
    //int mid = 5/2;
    int *t = new int[4*7+1];
    int len = sizeof(a)/sizeof(int);
    int s=0;
    int e = len-1;
    int index = 1;
    int num;
    cout<<e;
    build(t,index,s,e); //0,5 related to the array a
    int qe,qs;
    cout<<"number of query";
    cin>>num;
    while(num--){
       cin>>qs>>qe;
       cout<<"min val "<<query(t,1,s,e,qs,qe)<<endl;
    }

    delete [] t;
    return 0;
}

*/

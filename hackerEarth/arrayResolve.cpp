#include<iostream>
using namespace std;
void update(int *a,int id,int val,int N){
 if(val==0)
    return;
 a[id] = a[id] + val;
 if(id == N){
    //cout<<id <<"   "<<N<<endl;
    update(a,1,val-1,N);

 }
  else
      update(a,id+1,val-1,N);
}

int query(int *a,int l,int r,int N){
   if(l==r)
     return a[l];

   if(l==N)
      return a[l]+query(a,1,r,N);
   else
      return a[l]+query(a,l+1,r,N);
}

int main(){
int N,Q;

cin>>N>>Q;
int *arr = new int[N+1];
arr[0] = 0;
for(int i=1;i<=N;i++){
    cin>>arr[i];
}
   //cout<<endl;
   //for(int i=1;i<=N;i++){
    //cout<<arr[i]<<" ";
   //}
   //cout<<endl;
int type,id,val;
while(Q--){
   cin>>type;
   cin>>id;
   cin>>val;
   if(type==1){
    //cout<<"first type"<<endl;
    update(arr,id,val,N);
    //  for(int i=0;i<N;i++){
    //    cout<<arr[i]<<" ";
   //}
   }else{
     //
     //cout<<"second type"<<endl;
     cout<<query(arr,id,val,N);
   }

}
 delete [] arr;
return 0;
}

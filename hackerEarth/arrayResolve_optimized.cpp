/**
Array revolve
Max. Marks: 100
You are given an array A(1-based index) consisting of N integers. You have to process two types of queries on this array.

Type 1: Given ID and VAL, perform the operation UPDATE(ID, VAL)

    UPDATE(ID, VAL):

        if VAL == 0:

            return

        AID = AID + VAL

        if ID == N:

            UPDATE(1, VAL - 1)

        else :

            UPDATE(ID + 1, VAL - 1)

Type 2: Given L and R, find QUERY(L, R)

    QUERY(L, R):

        if L == R:

            return AL

        if L == N:

            return AL + QUERY(1, R)

        else :

            return AL + QUERY(L + 1, R)
**/

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
    while(val){
       arr[id] = arr[id] + val;
     if(id==N)
        id=1;
     else
     id++;
     val--;
      }
   }else{
     //
     //cout<<"second type"<<endl;
     int L=id,R=val;
     int sum = 0;
while(L!=R){
        //cout<<arr[L]<<endl;
    sum+=arr[L];
    if(L==N)
    {
        L = 1;
    }else{
     L++;
    }

}
sum+=arr[L];
cout<<sum<<endl;
   }

}
 delete [] arr;
return 0;
}

///Concept of pre order and postorder
/*
  while(val--){
    cout<<val<<" ";
}
cout<<endl;
val=p;
while(--val){
    cout<<val<<" ";
}
cout<<endl;
val=p;
while(val){
    cout<<val<<" ";
    val--; //same for --val;
}
*/

#include<iostream>
using namespace std;
#define Max 1000;

int heap[Max+1][2];

int Search(int f){
   if(f<0){
      heap[abs(f)][0]=f;

   }else{

   }

}

void Insert(int a,int n){

  for(int i=0;i<n;i++){
     if(a[i]<0)
       heap[abs(a[i])][0]=a[i];
     else
       heap[a[i]][1]=a[i];//0,1,2
  }

}


int main(){
  int a[]={1,-2,3,-4,5,0,-8};
  int n = sizeof(a)/sizeof(a[0]);
    Insert(a,n);
    Search(5);

return 0;
}

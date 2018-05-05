#include<iostream>
#include<algorithm>
using namespace std;


int func(long arr[],int n,int p){
    int  c=0;
   for(int i=0;i<n;i++)
      for(int j=i+1;j<n;j++){

      // if(i!=j)
      //  {
           int k= arr[i]*arr[j];
            for(int p=0;p<n;j++){
                 if(k!=arr[p])
                 return 0;
                 }
     //  }


      }

      return 1;

}

int main()
{
  int n;
  long  test,p;
  cin>>test;

  while(test--){
    cin>>n;
   long  arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];

      p=0;
     for(int j=p+1;j<n;j++)
     {
       int k=arr[p]*arr[j];
       int a=func(arr,n,k);




       if(a==0)
          cout<<"no";
       else
          cout<<"yes";
     }

  }




return 0;
}

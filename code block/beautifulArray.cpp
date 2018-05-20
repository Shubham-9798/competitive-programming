#include<iostream>
using namespace std;
#define d 10000

 int func(long int arr[],int n){
    int k,t=1;



   for(int i=0;i<n;i++)
      for(int j=i;j<n;j++){
       if(i!=j)
        {
          k = arr[i]*arr[j];
          cout<<k<<"ssss"<<endl;
        }
       for(int l=0;l<n;l++){
           if(k!=arr[l])
           t=0;
           }

      }
   cout<<"-----"<<t<<"---"<<endl;
      return t;//yes 1//no 0//

}

int main()
{
  int n;
  long int test;
  cin>>test;

  while(test--){
    cin>>n;
   long int arr[n];
   for(int i=0;i<n;i++)
     cin>>arr[i];

   int a=func(arr,n);
    if(a==0)
       cout<<"no";
    if(a==1)
       cout<<"yes";


  }



return 0;

}

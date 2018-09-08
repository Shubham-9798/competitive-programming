#include<iostream>
using namespace std;

/*Complete the function below*/
int PalinArray(int a[], int n)
{  //add code here.
    //add code here.
   int sum=0,p;
   for(int i=0;i<n;i++){
       int pal=a[i];
       while(a[i]){
           p=a[i]%10;
           a[i]=a[i]/10;
           sum=sum*10+p;
       }
       if(sum!=pal)
         return 0;
         sum=0;
   }

   return 1;


}

int main(){
    int a[]={111,222,333,444};
    int n=4;
  PalinArray(a,n);
return 0;
}

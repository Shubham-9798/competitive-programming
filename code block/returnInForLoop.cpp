#include<iostream>
#include<algorithm>
using namespace std;


int func(int n){
   for(int i=0;i<9;i++){
        if(i==n)
            return 0;
      }

      return 1;

}

int main()
{
  int n;
  long  test;
  cin>>test;

  while(test--){
    cin>>n;

     int a=func(n);
    if(a==0)
       cout<<"n is less then 9";
    else
       cout<<"n is greater then 9";


  }




return 0;
}


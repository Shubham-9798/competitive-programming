#include<iostream>
using namespace std;

int func(int a,int b){

    if (a == 0 || b == 0)
       return 0;

    if(a==b)
      return a;

    if(a>b)
        return func(a-b,b);
    if(a<b)
        return func(a,b-a);

}


int main(){
   int a=30,b=96;
   cout<<func(a,b);



return 0;
}

#include <iostream>
using namespace std;

// Function prototype


int fact(int a);
int main()
{
    int a,test;
    cout<<"number of test case";
    cin>>test;
    int temp1=0;

    while(test--){

    int a;
    cout<<"enter the number";
    cin>>a;
   cout<< fact(a)<<endl;



    }


    return 0;
}

int fact(int a){
   if(a==1)
     return 1;

return fact(a-1)*a;

}






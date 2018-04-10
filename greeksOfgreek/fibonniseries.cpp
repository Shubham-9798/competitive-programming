#include <iostream>
using namespace std;

// Function prototype


int fibonni(int a);
int fibonniSum(int a);
int main()
{
    int a,test;
    cout<<"number of test case";
    cin>>test;
    int temp1=0;

    while(test--){

        cout<<"enter the number u want to print";
        cin>>a;
        int t=0;
       cout<<fibonni(a)<<endl;

       // cout<<fibonniSum(a)<<endl;
       cout<<"sum fro fibonni series"<<endl;
        int b,sum=0;
        cin>>b;

        for(int i=1;i<=b;i++){
           sum=sum+fibonni(i);
        }
         cout<<sum;

    }




    return 0;
}

int fibonni(int a){
if((a==1)||(a==2)||(a==0))
    return 1;

    return fibonni(a-1)+fibonni(a-2);

}

int fibonniSum(int a){

if(a==0)
    return 0;

    return fibonni(a);





}







#include <iostream>
using namespace std;

// Function prototype

bool prime(int i);

int main()
{
    int a,test;
    cout<<"number of test case";
    cin>>test;
    int temp1=0;

    while(test--){

        cout<<"enter the range for twin prime";
        cin>>a;

        for(int i=1;i<=a;i++){

          prime(i);

        }

    }


    return 0;
}

bool prime(int i)
{
    int j=i;

    for(int k=2;k<i;k++){
       if((i%k=0)||(i==2))//not prime condition
        {

           return false;
        }

    }


}




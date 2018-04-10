#include <iostream>
using namespace std;

// Function prototype


int add(int a);
int main()
{
    int a,test;
    cout<<"number of test case";
    cin>>test;
    int temp1=0;

    while(test--){

        cout<<"enter the range for number";
        cin>>a;

cout<<add(a);

    }


    return 0;
}


int add(int a){
int t=0;
if(a==0)
    return 0;

    t=add(a-1)+a;
    return t;

}




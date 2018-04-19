#include <iostream>
using namespace std;

int main () {

    int a;
    cout<<"enter the number of row for stars";
    cin>>a;

    for(int i=a;i>=1;i--)//row//4
    {
        for(int j=1;j<=a;j++)//column
        {
             if((j>=i))//j>=4 (j<=i) differnert triangle
                cout<<"*";
             else
                cout<<" ";
        }
        cout<<"\n";


    }


   return 0;
}



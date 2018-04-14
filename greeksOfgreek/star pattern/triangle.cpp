#include <iostream>
using namespace std;

int main () {

    int a;
    cout<<"enter the number of row";
    cin>>a;

    for(int i=0;i<a;i++)//row
    {
        for(int j=a;j>0;j--)//column
        {
            if(j>a-i-1)//j>5-4//  j(5 4 3 2 1)>5-0-1
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";

    }



    cout<<"enter the number of of stars row";
    cin>>a;

    for(int i=0;i<a;i++)//row
    {
        for(int j=a;j>0;j--)//column
        {
            if(j<=a-i-1)//j>5-4//  j(5 4 3 2 1)>5-0-1
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<"\n";

    }
   return 0;
}


// C++ program to demonstrate default behaviour of
// sort() in STL.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5];
    int *j;
    j=a;

    int k=10;
    int *kk=&k;
    cout<<*kk<<"-----------------------"<<k<<"------"<<kk<<endl;

    for(int i=0;i<5;i++)
     {
        scanf("%d",&a[i]);

     }


    for(int i=0;i<5;i++)
     {
        cout<<*(j+i)<<endl;

     }


     cout<<"------------------------------------------------------"<<endl;
     int n=5;
     for(int i=0;i<n-1;i++)
     {
         for(int j=i;j<n;j++)
            cout<<j<<"\t"<<j+1<<endl;
     }

    return 0;
}

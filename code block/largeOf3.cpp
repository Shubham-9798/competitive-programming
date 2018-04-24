
//#include <stdio.h>
//#include <stdlib.h>
#include <bits/stdc++.h>
#include<iostream>

int main()
{

    int a,b,c;
    cin>>a>>b>>c;


        if(a==c==b)
           cout<<"a b c equal";


    if(a>=b)
      {
           if(a>c)
            cout<<"a is largest\t"<<"c is second largest";
       else if(a==c)
           cout<<"a c equal";
       else
        cout<<"c largest\t"<<"a is second largest";
      }
    else{
       if(b>c)
            cout<<"b is largest\t"<<"c is second largest";
       else if(a==c)
           cout<<"a b c equal";
       else
        cout<<"c largest\t"<<"b is second largest";
    }


   return 0;
}

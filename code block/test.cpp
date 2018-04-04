#include<stdio.h>
#include<iostream>

using namespace std;

int main()
{
 //   cerr << "An error occured";
  //clog << "An error occured";
/*
  double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};//it take 8 space

  cout<<sizeof(balance)<<endl; //==40
  cout<<sizeof(*balance)<<endl;//size of base address
  cout<<sizeof(balance)/sizeof(*balance);//calculate the length of array ==8
   int a=10;
   cin>>a;
   cout<<"enter the sge"<<endl;//output method
   cout<<a;


   cout << "Size of char : " << sizeof(char) << endl;//size of operator
   cout << "Size of int : " << sizeof(int) << endl;
*/


   //----------------------------------------------------------------------------
   char ch =' ';
       // checking is it space?
    if (isspace(ch))
        printf("\nEntered character is space");
    else
        printf("\nEntered character is not space");


        //-----------------------------------
        string a="s sk";
        cout<<a[1];
        cout<<a[3];

            if (isspace(a[1]))
        printf("\nEntered character is space ksksjkj");
    else
        printf("\nEntered character is not space");






    return 0;
}

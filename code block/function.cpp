#include<stdio.h>
#include<iostream>
#include<string>

using namespace std;

int sum(int x, int y);
//void fin(string& xx);
void finn(char* xxx);
int main()
{
   int a=10,b=20;

    int m=sum(10,60);
    cout<<m;
    char s[]="shubha kaoor";
    //string s="shubham";
    //fin(s);
    finn(s);


    return 0;
}

int sum(int x,int y)
{

    return x+y;
}


void finn(char* xxx)
{
   //not able to handle the string becoz string handle using ref or pointer
    cout<<"shubhammma"<<endl;
    cout<<xxx[1];
    cout<<xxx;

    if(xxx="pkpfk")
        cout<<"ddddd";
    else
        cout<<"ddddd";

}



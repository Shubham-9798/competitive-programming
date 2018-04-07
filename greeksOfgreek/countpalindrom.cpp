
#include<stdio.h>
#include<iostream>
#include<string.h>

#include<fstream>


using namespace std;

bool func(char* aa);
int main()
{

/*
    //concatination in c++
    string a,b; //string is object in c++

    getline(cin,a);
    getline(cin,b);

    //getc(a);//work for the char []
    //getc(b);


    cout<<a+b;




    char s1[50], s2[50], result[100];

    cout << "Enter string s1: ";
    cin.getline(s1, 50);

    cout << "Enter string s2: ";
    cin.getline(s2, 50);

   // cout<<s1+s2;//not use operator + ,it work only for string
    cout<<strcat(s1, s2);
    string str1=strcat(s1, s2);
   // char str2=strcat(s1, s2);//strcat work with string

    cout<<str1;

    */


    /*
  char str[100],pa[50];
  string st="";
  gets(str);


  // string str;
  // getline(cin,str);


   int n=strlen(str);
   str[n]=' ';
   cout<<n<<endl;

   for(short int i=0;i<n+1;i++)
   {
     if(isspace(str[i]))
     {
         func(pa);
         st="";
     }

     else{

        st=str[i]+st;
        strcpy(pa, st.c_str());



     }

   }
*/


   char a[100],b[100];
   int k=0;
   gets(a);

   int n=strlen(a),ct=0;
   a[n]=' ';

   for(int i=0;i<n+1;i++)
   {
       if(isspace(a[i]))
       {


        b[k]='\0';
        bool t=func(b);
        if(t==true)
            ct++;
        //cout<<b<<endl;
        k=0;
       }
       else
       {
          b[k]=a[i];
          k++;
       }
   }


   cout<<ct<<" number of palindrame";
    return 0;
}

bool func(char* aa){

       int n=strlen(aa);
cout<<n<<"ddddddddddddddd"<<endl;
         for (int i=0; i<n; i++,n--)
           if (aa[i]!=aa[n-1])
              return false;
        return true;
  //cout<<aa<<endl;
}

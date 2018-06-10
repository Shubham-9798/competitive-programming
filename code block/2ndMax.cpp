// C++ program to demonstrate default behaviour of
// sort() in STL.

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, -2, 0};
   sort(arr,arr+10);
   cout<<arr[0];



    if(true){
        cout<<"sanju"<<"\n";
    }



        bool p=true;
   for(int i=3;i<50;i++){
        p=true;
     for(int j=2;j<i;j++){
        if(i%j==0)
            p=false;
     }
     if(p==true)
        cout<<"prime number is"<<i<<"\n";
   }





//   getline
//   gets(str);
  string str;
  string strNew="";
  std::getline (std::cin,str);
 // std::cout << "Hello, " << str<< "!\n";

  for(int i=0;i<str.length();i++)
  {
     // cout<<str[i]<<"\n";
      if((('A'<=str[i])&&(str[i]<='Z'))||('a'<=str[i])&&(str[i]<='z'))
         strNew=strNew+str[i];

  }
  cout<<strNew;

//reverse(strNew);





    return 0;
}

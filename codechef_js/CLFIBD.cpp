

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

void foo(int b){
      std::vector<int> arr;
     // std::vector<int>::iterator i;
     std::vector<int>::iterator it;

    // it = arr.begin();
         arr.insert ( it , b);
   cout<<"\n";
        for( it=arr.begin();it!=arr.end();it++)
        {
            cout<<*it<<"vector cll"<<endl;

        }

         cout<<arr[0]<<"gogoggogo"<<arr.size()<<endl;


}

int main(){

   int test,c=0;
   string str;

   cin>>test;
   while(test--){
      cin>>str;
       for(int i=0;i<str.length();i++)
       {
           //cout<<" f";

           if(str[i]!=' '){
             char f=str[i];
           //  cout<<"D";
          // cout<<f<<endl;
              for(int k=i;k<str.length();k++)
              {
                  if(str[k]==f)
                  {
                      c++;
                      str[k]=' ';
                  }
              }
             foo(c);
              cout<<"the give character is ="<<f<<"occur "<<c<<endl;

              c=0;
           }
       }




   }


return 0;
}

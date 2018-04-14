#include <iostream>
using namespace std;

int main () {

    int a;

    cout<<"hollow squre"<<endl;
    cout<<"Enter the number of row";
    cin>>a;

    for(int i=0;i<a;i++){

        for(int j=0;j<a;j++)
        {
          if((i==0)||(i==a-1))
          cout<<"*";
          else{

           if((j==0)||(j==a-1))
              cout<<"*";
            else
                cout<<" ";
          }
        }
      cout<<"\n";
    }





   return 0;
}

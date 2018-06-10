#include<iostream>
using namespace std;

int func(int a, int b){
    if(a==b)
        return 1;

      func(a+1,b);
      cout<<a<<"and"<<b<<"\n";
      //func(a,b-1);
      //func(a,b-1);
}

int main(){

    func(0,4);

return 0;
}

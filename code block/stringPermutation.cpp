#include<iostream>
using namespace std;

int func(int a,int b,string str){
  //cout<<a<<"ddd"<<str;
  if((a==0)||(a==0))
    return 0;

  func(a-1,a-2,str);
  cout<<"["<<a<<"-->"<<b<<"]\n";
  //func(a,b-1,str);

}

int main(){
   string str="shu";

   int a=str.length();
   cout<<func(a,a,str);

return 0;
}

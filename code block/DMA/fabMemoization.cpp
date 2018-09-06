#include<iostream>
#include <map>
#include <iterator>

using namespace std;
map <int, int > memo;
map <int, int > ::iterator it;


//1 1 2 3 5 8 13 21 34 55
int fb(int fib){

  int result;
  if(fib<=2){

     return 1;
  }


  result = fb(fib-1)+fb(fib-2);
  return result;
}

int main(){
  int fib;
  cout<<"Enter number";
  cin>>fib;
  cout<<fb(fib)<<endl;

  for(auto it=memo.begin();it!=memo.end();it++){
    cout<<it->first<<"  "<<it->second<<endl;
  }
return 0;
}


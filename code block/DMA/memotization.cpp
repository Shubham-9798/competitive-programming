#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int cntf = 0;
map <long long int, long long int> memo;
std::map<long long int,long long int>::iterator it;


long long int fib(int val){
        it = memo.find(val);
        if (it != memo.end())
      {
          //cout<<"memoziation";
        cout<<it->first<< " value"<<it->second<<endl;
          return it->second;
      }
 cntf++;
  if (val <= 1)
      return val;
  long long int memoVal = fib(val-1) + fib(val-2);//return f4+f+3 f3+f2
        //it = memo.find(memoVal);
        //if (it != memo.end())
  memo.insert(pair <long long int, long long int> (val, memoVal));
      for ( it = memo.begin(); it != memo.end(); ++it)
    {
       // cout  <<  '\t' << it->first
            //  <<  '\t' << it->second << '\n\n';
    }
    return memoVal;
}
int main(){

unsigned long long first = 1,second=1,val;
//fib using loop
int cnt = 0;
cout<<first<<"\t"<<second<<"\t";
for(int i=2;i<10;i++){
        cnt++;
        if(i%9==0)
        cout<<endl;
    val=first+second;
    first=second;
    second=val;


}cout<<val<<"\t"<<endl;cout<<"count of loop "<<cnt;

cout<<endl;
cout<<fib(10)<<endl;
cout<<"count of funct "<<cntf;
}

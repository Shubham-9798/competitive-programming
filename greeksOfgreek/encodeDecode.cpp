#include<iostream>
//recursive program to make the pair of 2;
using namespace std;
int helper(string data,int strt, auto len){
   //cout<<data<<"DD"<<len<<endl;
   if(len == strt )
    return 0;



   helper(data,strt+1,len);
    cout<<strt<<""<<len<<endl;
      helper(data,strt,len-1);


   return 0;
}

void func(string data){

    helper(data,0, data.length()-1);
}

int main(){
    string encode = "12345";
    func(encode);


}



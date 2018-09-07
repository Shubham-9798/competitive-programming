// C++ program to find the hyperfactorial
// of a number
#include <bits/stdc++.h>
#include<iostream>
// of a number using boost libraries
//#include <boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;



using namespace std;
int newFactorial(int n){
  if(n==1)
    return 1;

   return pow(n,n)*newFactorial(n-1);
}
int main(){
//first method using loop
cout<<pow(2,2)<<endl;
long int n=4;
long long int sum=1;
for(int i=1;i<=n;i++){

    sum=sum*pow(i,i);
    cout<<sum<<endl;
}
cout<<sum<<endl<<endl;
//find using recursion
cout<<"uisng recursion"<<endl;
cout<<newFactorial(n);

return 0;
}

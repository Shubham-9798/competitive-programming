#include<iostream>
using namespace std;
//There are N number of persons in a party, find the total number of handshake such that a person can handshake only once.

int handshake(int n)
{
    // when n becomes 0 that means all the
    // persons have done handshake with other
    if (n == 0)
        return 0;
    else
        return (n - 1) + handshake(n - 1);
}

int main(){

   //first method if n=9 n=n-1 n(n-1)/2
   int n =9 ;
   n=n-1;
   cout<<(n*(n+1))/2<<endl;
   //using recursion
    cout<<endl<<endl;
    n=9;
    printf("%d", handshake(n));

return 0;
}

/// Given a number N, print least prime factors for all numbers from
/// 1 to N.  The least prime factor of an integer N is the smallest prime number that divides it. The least prime factor of all even numbers is 2. A prime number is its own least prime factor (as well as its own greatest prime factor).  Note : 1 needs to be printed for 1.
///
/// Input: N = 6
/// Output: 1 2 3 2 5 2


#include<iostream>
using namespace std;

int gcd(int a, int b) {
if(a == 0)
    return b;

return gcd(b%a, a); // using modula give zero
}

 int gcdNormal(int a, int b) {
if(a==0)
    return b;
if (b==0)
    return a;
if(a==b)
    return a;
if(a>b)
    return gcdNormal(a%b,b);
else
    return gcdNormal(a, b%a);

 }

int main() {

cout<<gcd(16,6)<<endl;
cout<<"Noremal gcd\n";
cout<<gcdNormal(16,6);

return 0;
}

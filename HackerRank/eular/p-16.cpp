#include<iostream>
#include<math.h>  ///solve using python
using namespace std;

int main() {
int test, val, sum=0;
cin>>test;
while(test--) {
    cin>>val;
    sum=0;
    unsigned long long num = pow(2,val);
    while(num>0) {
        sum+=num%10;
        num/=10;
    }
    cout<<num<<" "<<sum;

}



return 0;
}




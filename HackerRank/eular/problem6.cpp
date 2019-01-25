
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    string  str;
    cin>>test;
     long long  val_1;
     long long  val_2;
    while(test--){
        int n;
        cin>>n;
        val_1 = (n*(n+1))/2;
        val_2 = (2*n+1)/3;

        cout<<(val_1*(val_1-val_2))<<endl;
    }

    return 0;
}

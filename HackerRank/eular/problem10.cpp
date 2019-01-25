#include <cmath>
#include <cstdio>
#include <vector>
#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

        // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[2000000+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=2000000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (long long i=p*2; i<=2000000; i += p)
                prime[i] = false;
        }
    }
  vector<long long> arr;
    // Print all prime numbers
    for (int p=2; p<=2000000; p++)
       if (prime[p])
         arr.push_back(p);

    long long test,n,sum;

    cin>>test;
    while(test--){
        cin>>n;
        sum=0;
        for(long long i=0;arr[i]<=n;i++){
            //cout<<arr[i]<<endl;
            sum+=arr[i]; //2,3,7
        }
        cout<<sum<<endl;
    }


    return 0;
}

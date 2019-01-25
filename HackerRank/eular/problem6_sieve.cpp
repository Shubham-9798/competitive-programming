
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;


int main() {
    int n,test;

    vector <int> arr;
    cin>>test;
    arr.push_back(0);
        bool prime[1000000+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=sqrt(1000001); p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }


    for (int p=2; p<=1000000; p++)
       if (prime[p])
          arr.push_back(p);

    while(test--){
        cin>>n;
        cout<<arr[n];


    // Print all prime numbers



    }

return 0;
}

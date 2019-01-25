#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

//prime number triplet are co-prime but not definitely prime triplet
// the extreme condition for brute force for outer loop is s/3 and inner one s/2 s is max limit
// a+b+c = s perimeter
//primitive prime triplet are triplet with  a,b,c is co-prime
int main() {
    bool prime[2000];
    vector<int> arr;
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=3000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=3000; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    for (int p=2; p<=3000; p++)
       if (prime[p])
          arr.push_back(p*p);




    return 0;
}

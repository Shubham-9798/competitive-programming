
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    int t;
    cin >> t;


    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    long long prime[1000000000000+1];
    memset(prime, 1, sizeof(prime));

    for (long long p=2; p*p<=1000000000000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == 1)
        {
            // Update all multiples of p
            for (long long i=p*2; i<=1000000000000; i += p)
                prime[i] = 0;
        }
    }


    for(int a0 = 0; a0 < t; a0++){ /// test case
        int min = 0;
        long n;
        cin >> n; // value
         while(n--){
             if(prime[n])
             {

                 break;
             }
             //n--;
         }
        //cout<<factors(n,prime)<<"\n";
        cout<<n+1<<endl;


    }

    return 0;
}






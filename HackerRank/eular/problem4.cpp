///
/// 100*100 = 101101; Min 143 x 700
/// 999*999 = 998001; Max
/// -------------------

#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define rep(x,t,n) for(ll x = t; x < n; ++x)
#define repe(x,t,n) for(ll x = t; x <= n; ++x)
#define dec(x,t,n) for(ll x = t; x >= n; --x)
#define iter(it,x) for(auto it : x)
#define nl cout<<'\n';
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp(x,y) make_pair(x,y)
#define imax INT_MAX
#define imin INT_MIN
#define f first
#define s second
#define vvi vector<vector<int> >
#define vvl vector<vector<ll> >
#define so(x) sizeof(x)
#define mod 1000000007
#define N 100000

using namespace std;

vector<ll> SieveOfEratosthenes(ll n)
{
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers
    vector<ll> arr;
    for (int p=2; p<=n; p++)
       if (prime[p] && p!=2)
          {
              //cout << p << " ";
              arr.push_back(p);
              }

       return arr;
}


int primeFactors(ll n, vector<ll> arr)
{
    // Print the number of 2s that divide n
    ll maxx = -1,i;
    while (n%2 == 0)
    {
        maxx = 2;///printf("%d ", 2);
        ///cout<<maxx;
        n = n/2;
    }

    int pass;
    for ( auto i : arr)
    {
        // While i divides n, print i and divide n
        while (n%i == 0) //
        {
            //printf("%d ", i);
            if(i>maxx) maxx = i;
            n = n/i;
        }
        pass = n;
    }


    if (n > 2)
       {
           if(n>maxx)
            maxx = n; /// printf ("%d ", n);
           cout<<n<<"--\n";
       }

    return maxx;
}

using namespace std;

int main() {

    ll test, Nn;
    cin>>test;
    vector<ll> arrPrime = SieveOfEratosthenes(1000000);//
    /// for(auto a: arrPrime){ cout<<a<<"\t";}
    while(test--) {
        cin>>Nn;
        cout<<primeFactors(Nn, arrPrime)<<"\n";
    }

    cout<<"list of prime number upto 1000000";
    int upto = 1000000;
    /// for(int i=3;i<1000000;i++)

    return 0;
}

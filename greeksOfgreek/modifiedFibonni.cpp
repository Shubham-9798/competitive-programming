#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int fibonacciModified(int t1, int t2, int n) {
      if(n==t1)
          return t1;
      if(n==t2)
          return t2;

    return fibonacciModified(t1,t2,n-2)+pow(fibonacciModified(t1,t2,n-1),2);
}

int main() {
    int t1;
    int t2;
    int n;
    cin >> t1 >> t2 >> n;
    int result = fibonacciModified(t1, t2, n);
    cout << result << endl;
    return 0;
}

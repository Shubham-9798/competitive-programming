#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int proper(int a) {
    vector<int> arr(100, 0);
    int j=2;
    int sum=1;
    while(true && j<=a/2) {
        /// cout<<"called"<<endl;
        int i = j,k=1;
        /// cout<<i<<"\t";
        if(!arr[i]){
        while(a%i==0) { /// cout<<i<<"\n";
            arr[i]=1; sum+=i;
            k++;
            i=i*k;

        }}
    j++;
    }
    j=0;
    // for(auto i: arr){ if(i)cout<<j<<"\t"; j++;}

    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test, num;
    cin>>test;
    while(test--) {
        cin>>num;
        int a = proper(num); cout<<a<<"\n";
        int b = proper(a);   cout<<b;
        if(num==b)
            cout<<a+b;
    }
    return 0;
}

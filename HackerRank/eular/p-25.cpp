#define ll long long



#include <iostream>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unordered_map<long long, int> arr;
    ll f1 = 1;
    ll f2 = 1;
    ll f3;
    arr[1]=1;
    for(int i=3;i<=5000;i++) {

        f3 = f1 + f2;
        ll len = to_string(f3).length();
        if(arr.find(len)==arr.end()) {arr[len] = i;}

        f1=f2;
        f2=f3;
        cout<<f3<<endl;

    }

    int test,len;
    cin>>test;
    while(test--) {
        cin>>len;
        cout<<arr[len];
    }





    return 0;
}


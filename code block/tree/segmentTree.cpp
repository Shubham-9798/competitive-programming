#include <cmath>
#include <cstdio>
#include <vector>
#include <iterator>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    vector<int> arr;
    vector<int>::iterator it;
    cin>>n;
    int val;


    while(cin>>val){

        arr.push_back(val);
    }
    for(it=arr.begin();it!=arr.end();it++)
        cout<<*it<<endl;
    return 0;
}


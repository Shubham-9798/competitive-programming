
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test;
    vector<int> arr;
    cin>>test;
    int n, prime,index=2;
    arr[1] = 2;
    while(test--){
        cin>>n;
        int c=2;
        prime = 3;
        if(index>=n)
        {
            //cout<<"equality"<<endl;
            cout<<arr[n]<<'\n';
            continue;
        }else{
         while(c<=n){
                bool p=true;
            for(int i=2;i<prime;i++){
                if(prime%i==0)
                 {
                     p=false;
                     break;
                     }

            }
            if(p)
            {
                //cout<<prime <<"inserted"<<endl;
                arr[index] = prime;
                c++;
                index++;
            }

            prime++;
          }
          cout<<arr[index-1]<<endl;
        }

    }
    return 0;
}

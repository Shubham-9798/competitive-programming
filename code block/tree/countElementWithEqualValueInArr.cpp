// C++ program to count of index pairs with
// equal elements in an array.
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

// Return the number of pairs with equal
// values.
int countPairs(int arr[], int n)
{
    unordered_map<int, int> mp;

    // Finding frequency of each number.
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;

    // Calculating pairs of each value.
    int ans = 0;
    for (auto it=mp.begin(); it!=mp.end(); it++)
    {
        int count = it->second;
        ans += (count * (count - 1))/2;
    }

    return ans;
}

// Driven Program
int main()
{
    int arr[] = {1, 1, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << countPairs(arr, n) << endl;
    return 0;
}

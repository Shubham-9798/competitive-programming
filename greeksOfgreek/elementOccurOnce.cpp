// C++ implementation to find elements
// that appeared only once
#include <bits/stdc++.h>
using namespace std;


void occurredOnce(int arr[], int n)
{
    unordered_map<int, int> mp;

    cout<<"inserted value"<<mp[2]<<endl;

    for (int i = 0; i < n; i++)
           {
            mp[arr[i]]++;
         cout<<"inserted value"<<mp[arr[i]]<<endl;
        }


    for (auto it = mp.begin(); it != mp.end(); it++)
        if (it->second == 1)
            cout << it->first << " ";
}

// Driver code
int main()
{

    int arr[] = { 7, 7, 8, 8, 9, 1, 1, 4, 2, 2,7 };
    int n = sizeof(arr) / sizeof(arr[0]);

    occurredOnce(arr, n);

    return 0;
}

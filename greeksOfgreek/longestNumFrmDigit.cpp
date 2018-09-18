
#include <bits/stdc++.h>

using namespace std;


void findMaxNum(int arr[], int n)
  {

    int hash[10] = {0};
    for(int i=0; i<n; i++)
      {
           hash[arr[i]]++;
    }

    for(int i=9; i>=0; i--)
    {
        // Print the number of times a digits occurs
        for(int j=0; j<hash[i]; j++)
            cout<<i;
    }
}

// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 0};

    int n = sizeof(arr)/sizeof(arr[0]);

    findMaxNum(arr,n);

    return 0;
}

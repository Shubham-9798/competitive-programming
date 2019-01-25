// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value
#include <bits/stdc++.h>

using namespace std;

void printPairs(vector<int> arr, int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];

        if ( s.find(temp) != s.end()) // here it use traversing algo
            cout << "Pair with given sum " << sum <<
                 " is (" << arr[i] << ", " << temp <<
                 ")" << endl;

        s.insert(arr[i]);
    }
}

void printPairs_map(vector<int> arr, int arr_size, int sum)
{
    unordered_map<int, int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];

        if ( s.find(temp) != s.end())
            cout << "Pair with given sum " << sum <<
                 " is (" << arr[i] << ", " << temp <<
                 ")" << endl;

        //s.insert(arr[i]);
        s.insert(make_pair(arr[i], arr[i]));
    }
}

/* Driver program to test above function */
int main()
{
    //int A[] = {5,-2,1, 4, -45,100,-94 ,6, 10,-4, 8,51,0};
    vector<int> arr {5,-2,1, 4, -45,100,-94 ,6, 10,-4, 8,51,0};
    int n = 6;
    int arr_size = arr.size();

    // Function calling
    printPairs(arr, arr_size, n);
    cout<<"------------------------"<<endl;
    printPairs(arr, arr_size, n);

    vector<int>::iterator it;
    it = arr.begin();
    //arr.erase(it);

    cout<<"size"<<arr.size();
    auto pend = std::remove(arr.begin(), arr.end(), 4);
    for(auto x : arr)
      cout<<x<<endl;
        //arr.clear();
            for (std::vector<int>::iterator p = arr.begin(); p != pend; ++p)
        std::cout << ' ' << *p; std::cout << '\n';

    cout<<"size"<<arr.size();

    return 0;
}

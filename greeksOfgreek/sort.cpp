// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 5, 8, 9, 6, 7, 3, 4, 2, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    sort(arr, arr+n);

    cout << "\nArray after sorting using "
         "default sort is : \n";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";


        cout<<"sssssssssssssssssssss"<<endl;

        int a;
        vector<int> ar;
        for(int i=0;i<5;i++)
        {
            scanf("%d",&a);
             ar.push_back (a);
        }

         for(int i=0;i<5;i++)
        {
            cout<<ar[i]<<endl;

        }

       ar.erase(ar.begin()+5);

                for(int i=0;i<4;i++)
        {
            cout<<ar[i]<<endl;

        }
    return 0;
}
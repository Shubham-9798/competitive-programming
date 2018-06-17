#include <bits/stdc++.h>

using namespace std;

// Complete the bigSorting function below.
vector<string> bigSorting(vector<string> unsorted) {
     int n=unsorted.size();

     int maxN=(int)unsorted[0];
    for(int i=1;i<n;i++){
        int a=(int)unsorted[i];
       if(maxN<a)
            max=a;
    }
  return maxN;
}

int main()
{
    vector<string> a;

    a.puch_back("2");
    a.puch_back("43");
    a.puch_back("34534343");
    a.puch_back("34");
    a=bigSorting(a);

    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}

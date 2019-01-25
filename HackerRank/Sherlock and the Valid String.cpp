#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// Complete the isValid function below.
string isValid(string s) {
   vector<int> arr(26,0);
   int ct=0;
   for(int i=0;i<s.length();i++){
    arr[s[i]-97]++;
   }

   arr.erase(remove(arr.begin(),arr.end(),0),arr.end());
  int max=*max_element(arr.begin(),arr.end());
  int min=*min_element(arr.begin(),arr.end());

for(int i=0;i<arr.size();i++){
    if(arr[i]==max)
        max_count++;
    else if(arr[i]==min)
        min_count++;
}

if(max==min)
    return "YES";
if(min_count + max_count!=arr.size())
    return "NO";
if(min_count==1)
    return "YES";
if(max_count==1 && max==min+1)
    return "YES";

return "NO";
   }


   return ct>2?"NO":"YES";
}

int main()
{


    string s;
    cin>>s;

    string result = isValid(s);
    cout<<result;


    return 0;
}

#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.

string isValid(string s) {
    int len = s.length();
    unordered_map<char , int > arr;
    unordered_map<char , int >::iterator it;
    unordered_map<int , int > ar;
    unordered_map<int , int > :: iterator itr;

    int mn = INT_MAX;
for(int i=0;i<len;i++){
    arr[s[i]]++;

}
int len1 = arr.size();
//vector<int> strArr (26,0);
int pos =0;
for(auto it=arr.begin();it!=arr.end(),pos<len1;it++){
    ar[(it->first) - 97]=it->second + ar[(it->first) - 97];
    cout<<*it<<"----"<<advance(it, 1)<<endl;
    pos++;
    if(it->second<mn)
      mn = it->second;

}

cout<<"min count ->"<<mn<<endl;

for(auto itr=ar.begin();itr!=ar.end();itr++){
    cout<<itr->first<<"---"<<itr->second<<endl;
}



return "no";
}





int main(){
string str = "aaabbbcgcg";
cout<<isValid(str);

return 0;
}

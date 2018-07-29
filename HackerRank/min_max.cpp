#include <bits/stdc++.h>
#include <vector>
// C++ program to demonstrate the use of std::min_element
#include <iostream>
#include <algorithm>
using namespace std;

bool comp(int a, int b)
{
    return (a < b);
}

int main(){
  std::vector<int> v = {2,33,3,40,4};
  auto a=4;

   auto vale = *std::min_element(std::begin(v), std::end(v));
   cout<<*std::min_element(v.begin(),v.end());
  cout<<vale;

return 0;
}

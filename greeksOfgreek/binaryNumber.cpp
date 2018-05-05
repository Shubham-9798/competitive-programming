#include<iostream>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;
int main(){

  int n=70,r,b=0;

  std::string binary = std::bitset<8>(n).to_string();

  cout<<binary;

  int max1=0,count1=0,a[100],i=0;

  for(int i=0;i<binary.length();i++)
  {
      if(binary[i]=='1')
      {
       //cout<<binary[i]<<endl;
      count1++;



    if((max1<count1))
    {

        max1=count1;

    }
      }
      else
      {
          count1=0;

      }



  }
    cout<<endl;
    cout<<max1;
return 0;
}

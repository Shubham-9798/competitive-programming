//problem solve by recursive approach and also by the dynamic programing
// one of any solution is commented


#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

//comment Recursive Programming
/*
  |
  |
  |

int LCS(char *a, char *b, int i, int j){

  if(a[i]=='\0' || b[j]=='\0'){
    return 0;
  }
  else if(a[i]==b[j]){
     cout<<i;
     return 1+LCS(a,b,i+1,j+1);
  }else{
    return max(LCS(a,b,i+1,j), LCS(a,b,i,j+1));
  }

}

int main(){
    char str1[] = "abdacewed";
    char str2[] = "bacde";
    int n = strlen(str1);
    int m = strlen(str2);

    cout<<LCS(str1, str2, 0, 0);

return 0;
}
*/

//comment Dynamic Programing

int LCS(char *str1, char *str2, int i, int j){
  static int arr[5][9];
  //cout<<sizeof(arr)/sizeof(int);
  cout<<strlen(str1);
  if(str1[i] == str2[j]){
    arr[i][j] = 1+ LCS(str1,str2,i-1,j-1)
  }else{
    a
  }

  return 0;
}

int main(){
    char str1[] = "abdacewed";
    char str2[] = "bacde";
    int n = strlen(str1);
    int m = strlen(str2);

     cout<<LCS(str1, str2, 0, 0);
return 0;
}

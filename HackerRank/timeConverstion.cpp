#include<iostream>
#include <bits/stdc++.h>

using namespace std;

string timeConversion(string str) {
    /*
     * Write your code here.
     */     if((str[9]+str[10])=="PM")
     {
         return "sss";
     }
    else{
        str[9]='\0';
            return str;
    }



   return "shubham";
}

int main(){

  string s;
  getline(cin,s);


   string result = timeConversion(s);

    cout << result << "\n";



    return 0;

  return 0;
}

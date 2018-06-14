 #include<iostream>
#include<map>
#include <bits/stdc++.h>
#include<set>

using namespace std;
int main(){

   map<int ,string >first;

  first['a']=10;
  first['b']=30;
  first['c']=50;
  first['d']=70;


       std::map<int, int> order;
       std::map<int, int> ::iterator i;

    // Mapping values to keys
    //ascending order
    order[5] = 10;
    order[3] = 5;
    order[20] = 100;
    order[1] = 1;

    // Iterating the map and printing ordered values
    for ( i = order.begin(); i != order.end(); i++) {
        std::cout << i->first << " : " << i->second << '\n';
    }


    cout<<"-------------";
        // Unordered map
    std::unordered_map<int, int> order1;
     std::unordered_map<int, int> ::iterator it;

    // Mapping values to keys
    order1[5] = 10;
    order1[3] = 5;
    order1[20] = 100;
    order1[1] = 1;

    // Iterating the map and printing unordered values
    for ( it = order1.begin(); it != order1.end(); it++) {
        std::cout << it->first << " : " << it->second << '\n';
    }


return 0;
}

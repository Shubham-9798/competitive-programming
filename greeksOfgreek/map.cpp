#include<iostream>
#include<map>
#include<set>

using namespace std;
int main(){

   map<int ,string >mymap;
   set<int> myset;

   myset.insert(100),
   myset.insert(10),
   myset.insert(400),
   myset.insert(4000);

   for(auto &setval:myset){
    cout<<setval<<endl;

   }


return 0;
}


#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<bits/stdc++.h>
using namespace std;

bool f(int x, int y){
return x>y;
}

void vectorDemo() {
      vector<int> A = {1,2,3,0};
    sort(A.begin(), A.end());

    //log(n)
    bool present = binary_search(A.begin(), A.end(), 2);
    A.push_back(-22);
     sort(A.begin(), A.end());
     present = binary_search(A.begin(), A.end(), 20);///false

      ///lower bound
      A.push_back(100);
      A.push_back(100);
      A.push_back(100);
      A.push_back(123);
      vector<int>::iterator it= lower_bound(A.begin(), A.end(),100 );// return >=
      vector<int>::iterator it2= upper_bound(A.begin(), A.end(),100 );// return >
      cout<<*it<<"and"<<*it2<<endl;
      cout<<it2-it<<endl;

      sort(A.begin(), A.end(), f);
      for(int &x : A) { ///this is passed by reference
        x++; ///so we are able to update the value
      }
}

void setDemo() {
   set<int> s;
   s.insert(1);
   s.insert(2);
   s.insert(-1);

   for (int x: s) {
    cout<<x<<endl;
   }

   auto it = s.find(1);
   if(it == s.end()){
    ///not find
    cout<<"not found"<<endl;
   }else{
    cout<<*it<<endl;
   }

   auto it2 = s.upper_bound(-1);
   auto it3 = s.lower_bound(0);
   auto it4 = s.upper_bound(4);

   if(it4 == s.end()){
    cout<<"not found"<<endl;
   }else{
     cout<<"fount"<<*it4<<endl;
   }

}

int mapDemo() {
   map<int, int> a;
   a[1] = 1;
   a[2] = -1;
   a[3] = 200;

   map<char, int> cnt;
   string x= "shubham kapoor";
   for(char &c:x){
    cout<<c<<"-->before"<<endl;
    cnt[c]++;
    c++;
    cout<<c<<"-->after"<<endl;
    cnt[c]++;
   }
   cout<<cnt['h']<<endl;
   cout<<cnt['i']<<endl;

}

///problem in powerOfSet is to find give number lying in which range set
///[a,b] as no overlap between set
void powerOfSet(){
set< pair<int, int> > s;
///how does set store pairs
//for {a,b} and {c,d} a>b a comes first, a==c compare between b<d b comes first
s.insert({401, 450});
s.insert({10, 20});
s.insert({2, 3});
s.insert({30, 400});

int point =1;
auto it = s.upper_bound({point, INT_MAX});
if(it == s.begin()){
    cout<<"It's not present"<<endl;
}
it--;
pair<int, int> current = *it;
if(current.first<=point && point<=current.second){
    cout<<"It's present "<<current.first<<"---"<<current.second<<endl;
}else{
    cout<<"It's not present"<<endl;

}

for(auto x:s){
    cout<<x.first<<"  "<<x.second<<endl;
}

}

int main() {
   //vectorDemo();
   //setDemo();
   //mapDemo();
   powerOfSet();



}

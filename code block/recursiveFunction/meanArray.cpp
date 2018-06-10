#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

float func(vector <int> vec){
    vector <int> :: iterator it;

   // if(vec.end())




return 0;
}


int main(){

  vector<int> vec;
  vector<int> ve;
  vector <int> :: iterator it;

 /* string con;

  do{

    cout<<"enter Number";
    int j;
    cin>>j;


    vec.push_back(j);

    cout<<"do u want to continue,Y/N";
    getline(std::cin,con);

    cout<<con;
  }while(con=="Y"||con=="y");

*/

for(int i=0;i<5;i++)
{

    vec.push_back(i*5);
    ve.push_back(i*5);

}

    for(it=vec.begin();it!=vec.end();it++)
     cout<<*it<<"----\n";

    vec.erase(vec.begin()+1,vec.begin()+3);


    for(it=vec.begin();it!=vec.end();it++)
      cout<<*it<<"=========================\n";

    std::vector<int>::iterator pend;
    pend=std::remove(ve.begin(),ve.end(),5);

     std::cout << "Range contains:";
       for (std::vector<int>::iterator p = ve.begin(); p != pend; ++p)
         std::cout << ' ' << *p; std::cout << '\n';

     float j=func(vec);
           cout<<j<<"-----";
return 0;
}

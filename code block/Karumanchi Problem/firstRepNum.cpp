#include <iostream>
#include <utility>
#include <map>
#include <iterator>

using namespace std;

int main()
{

int arr[]={3,2,5,2,3,4,3};//1 2 3 4 5 6
   map <int, int> g;        // empty map container

    int ct=1;
  std::map<int, int>::iterator it;

   for(int i=0;i<7;i++){

        it=g.find(arr[i]);
        if(it->second<0)
            continue;
        if (it!=g.end())
         {
         it->second=-it->second;
          }
       else{
        g.insert(pair <int, int> (arr[i], ct));
        ct++;}
   }
 g.insert(pair <int, int> (3, 22));
cout<<"DDD"<<endl;
       for (map<int,int>::iterator i = g.begin(); i != g.end(); i++) {
        std::cout << i->first << " : " << i->second << '\n';
    }
    return 0;
}

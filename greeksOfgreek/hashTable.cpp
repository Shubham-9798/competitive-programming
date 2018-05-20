#include<iostream>
#include <map>
#include <list>
#include <iterator>

using namespace std;




class Hash{
    int bucket;
    list<int> *table;

    public:
     Hash(int v);

    void insertItem(int d);





        // hash function to map values to key
    int hashFunc(int x) {
        return (x % bucket);
    }

// function to display hash table
  void Hash::displayHash() {

      list <int> :: iterator it;

     for (int i = 0; i < bucket; i++) {
       cout << i;
      for (auto it : table[i])
         cout << " --> " << it;
          cout << endl;
  }
}


};

  Hash::Hash(int b){
      this->bucket=b;
      table = new list<int>[bucket];

   }

   void Hash::insertItem(int d){
       int index=hashFunc(d);
     table[index].push_back(key);


   }



int main(){



     int a[] = {15, 11, 27, 8, 12};
     int n = sizeof(a)/sizeof(a[0]);


  // map <int, int> gquiz1;        // empty map container
   Hash h(7);

    for (int i = 0; i < n; i++)
    h.insertItem(a[i]);
    h.displayHash();

   //list <int> list1;
   //list <int> :: iterator it;






return 0;
}

#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main(){
map <int, int > memo;
map <int, int > ::iterator it;
//memo[1] = 10;
 memo.insert(pair <int, int> (1, 40));

 for ( it = memo.begin(); it != memo.end(); ++it)
    {
        cout  <<  '\t' << it->first<<  '\t' << it->second << '\n\n';

    }
}

#include<iostream>
#include<map>
using namespace std;

int main() {

map<string, string> str;

string l,Q;
string tag, line;
cin>>l;
cin>>Q;

cout<<"\n";
/// int myint1 = stoi(str1);

while (std::getline(cin, line)) {
   if(line=="end") break;

   for(int l=1;line!=" ";l++){
    tag+=line[l];
   }
   cout<<tag;
   //m.insert(pair<string, string>(s1, v1));
}

return 0;
}

#include<vector>
#include<iostream>
#include <fstream>

using namespace std;

int main() {
vector<string> str;
int l=4;
string line;

while(std::getline(cin, line)) {
        if(line=="end") {
            break;
        }
    str.push_back(line);
}

vector<string>::iterator it;

for (it = str.begin(); it != str.end(); it++){
    cout << *it << '\n';
}



return 0;
}

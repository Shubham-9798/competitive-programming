#include<vector>
#include<iostream>
#include <fstream>

using namespace std;

class Ap {
public:
void over1(int a) {
printf("dddd");
}


};

int main() {
vector<string> str;
int l=4;
string line;

/*
while(std::getline(cin, line)) {
        if(line=="end") {
            break;
        }
    str.push_back(line);
}*/

while(true) {
    std::getline(cin, line);
    if(line =="end")
        break;
    str.push_back(line);
}

vector<string>::iterator it;

for (it = str.begin(); it != str.end(); it++){
    cout << *it << '\n';
}



return 0;
}

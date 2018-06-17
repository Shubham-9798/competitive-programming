#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> colour;

    // Initialize vector with strings using push_back
        // Initialize String Array
    string col[4] = {"Blue", "Red", "Orange", "Yellow"};
    for(int i=0;i<4;i++){
        cout<<(col+i)<<endl;

    }
    // command
    colour.push_back("Blue");
    colour.push_back("Red");
    colour.push_back("Orange");
    colour.push_back("Yellow");

    // Print Strings stored in Vector
    for (int i=0; i<colour.size(); i++)
        cout << colour[i] << "\n";

return 0;
}

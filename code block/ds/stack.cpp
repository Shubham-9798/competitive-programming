#include<iostream>
#include <stack>
using namespace std;
//stack is linear ds that store data
//push pop traversal
//it is abstract data type

//stack is implemented as
//Array
//Dynamic Array
//Link list

void showstack(stack <int> gq)
{
    stack <int> g = gq;
    while (!g.empty())
    {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}



int main(){//complexity n3

    stack <int> gquiz;
    //stack <string> gquiz;
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);

    cout << "The stack gquiz is : ";
    showstack(gquiz);

    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();


    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showstack(gquiz);


return 0;
}

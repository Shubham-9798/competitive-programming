#include<iostream>
#include <cmath>
using namespace std;
//minimum number of count for reducing number N to 1

int countways(int n)
{
    if (n == 1)
        return 0;
    else if (n % 2 == 0)
        return 1 + countways(n / 2);
    else
        return 1 + min(countways(n - 1), countways(n + 1));
}



int main(){
   int n;
   cout<<"Enter the number";
   cin>>n;

   cout << countways(n)<< "\n";
return 0;
}

#include<iostream>
#include<vector>
using namespace std;

vector <int> integerToArray(int x)
{
    vector <int> resultArray;
    while (true)
    {
    resultArray.insert(resultArray.begin(), x%10);
    x /= 10;
    if(x == 0)
        return resultArray;
    }
}

int sumOfSubset(vector<int> arr, int p,int sub){
  for(int i=sub;i<arr.length();i++){

  }
return 0;
}

int main(){

int num;
cout<<"enter the number"<<endl;
cin>>num;
vector <int> temp = integerToArray(num);
    for (auto const &element : temp)
        cout << element << " " ;

sumOfSubset(temp,2,0);



return 0;
}

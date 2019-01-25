
#include<iostream>
using namespace std;

int main(){
int num = 1000000;
int *arr = new int[num+1];

for(int i=0;i<num;i++){
    arr[i] = -1;
}
for(int i=0;i<num;i++){
    cout<<arr[i];
}



return 0;
}

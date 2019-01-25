
#include<iostream>
#include<vector>

using namespace std;

int main(){
vector<vector<int>> arr {{1,2,3},{4,5,6},{7,8,9}};
int arry[3][3];

int p=0,q=2;
for(int i=0;i<3;i++){
p=0;
    for(int j=2;j>=0;j--)
{
    //cout<<i<<j<<"="<<p<<q<<"\t";
    arry[p][q] = arr[i][j];
    p++;
}   q--;cout<<endl;}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arry[i][j]<<"\t";
    }cout<<endl;
}

}

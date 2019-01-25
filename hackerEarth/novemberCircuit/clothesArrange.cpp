#include<iostream>
#include<map>
#include<vector>
/// this code is correct but the time complexity error occurred
using namespace std;

int main(){

vector<int > arr;

int n,qry;
int val;
int a,b;

cin>>n;
for(int i=0;i<n;i++){
    cin>>val;
    arr.push_back(val);
}
cin>>qry;

while(qry--){
    cin>>val;
    if(val==1){ ///first query
    cin>>a;
    cout<<"query 1"<<endl;
    arr.push_back(a);
    }else if(val==2){ /// second query
    cout<<"query two is running"<<endl;
    cin>>a>>b;

     int top = arr.size();
     cout<<top<<" end array"<<endl;
     int fnd = -1,ct=0;
     int pos = -1;
     for(std::vector<int>::iterator it=arr.end()-1;it>=arr.begin();it--){
        cout<<*it;
        pos++;
        if(*it==a){
            ct++;
            cout<<"find"<<endl;
        }
        if(ct==b){
            cout<<"count ct"<<endl;
            fnd = pos;
            arr.erase(it);
            //continue ;
            break;
        }
     }
     for(std::vector<int>::iterator it=arr.end()-1;it>=arr.begin();it--){cout<<"array after erase "<<*it<<endl;}
    cout<<fnd<<endl;
    }

}

return 0;
}

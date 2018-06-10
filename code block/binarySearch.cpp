#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int binarySearch (vector<int>,int num);
int main(){

  int myints[] = {32,71,12,45,26,80,53,122};
  std::vector<int> myvector (myints, myints+8);
  int num=1522;


  //sort
  std::sort (myvector.begin(), myvector.begin()+myvector.size()-1);

  // cout<<myvector[0]<<"shubham";
  int a=binarySearch(myvector,num);


  if(a==0)
      cout<<"\n not fund";
  else
    cout<<"\n its found";


  //cout<<"\n"<<a<<"this is return";
return 0;
}



int binarySearch(vector<int> arr,int num)
   {
     std::vector<int>:: iterator it;

   //  for(it=arr.begin();it!=arr.end();it++)
    //   cout<<*it<<endl;

     int cont=0,left=0,right=arr.size()-1,t=1;
     //int mid=left+(right-1)/2;

   // cout<<"mid is"<<mid;
   cout<<right<<"  right\n";
     while(left<=right){

     cout<<"left"<<left <<"mkm"<<right;
     int mid = left + (right-left)/2;
        cout<<mid<<"mid term it going to strike\n";

     if(*(it+mid)==num)
        {
            //t=0;
            return 1;
        }

      if(num<*(it+mid))//122<a[3]
      {
          right=mid-1;
         // left=left;
         cout<<"smaller"<<right<<num;
          //mid=(left+right)/2;
      }
      else
      {
           left=mid+1;
           cout<<"greater"<<left;
           //right=
           //mid=right+left/2;
      }

     }

     return 0;
   }

#include<iostream>
#include<vector>
#include<iterator>
#include <limits>

using namespace std;

vector<int> climbingLeaderboard(vector<int> S, vector<int> A) {
    vector<int>::iterator it;vector<int>::iterator ite;
    vector<int> result;
    int rankCur=1;
    for(auto it=S.begin();it!=S.end()-1;it++)
    {
       if((*it!=*(it+1)))
         rankCur++;
    }

       for(auto it=A.begin();it!=A.end()-1;it++){
            for(auto ite=S.end();ite>S.begin();ite--)
               {
               if(*ite<*it){
                      rankCur++;
                      result.push_back(rankCur);
                      rankCur--;
                   }else{
                      rankCur++;
                   result.push_back(rankCur);rankCur--;
                   }
               }rankCur--;
         }//2nd loop

    cout<<rankCur<<endl;
 return result;
}

int main(){
   int numS,numA,val;
   cin>>numS;

   vector<int> S;vector<int> A;vector<int> ar;

   for(int i=0;i<numS;i++){
        cin>>val;
    S.push_back(val);
   }

   cin>>numA;
      for(int i=0;i<numA;i++){
        cin>>val;
    A.push_back(val);
   }

   ar = climbingLeaderboard(S,A);
      for (auto ptr = ar.begin(); ptr!=ar.end(); ptr++)
        cout << *ptr << " ";

return 0;
}

#include<iostream>
#include<vector>
#include<iterator>
#include <limits>

using namespace std;



int formingMagicSquare(vector<vector<int>> s) {
    vector<vector<vector<int>>>pre {
            {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
            {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
            {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
            {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
            {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
            {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
            {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
            {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
            };
            int minTotal = std::numeric_limits<int>::max();;
            int coutval = 0;;

            for(int k=0;k<8;k++){cout<<endl;coutval = 0;
                  for(int i = 0;i<3;i++){
                      //  cout<<endl;
                    for(int j = 0;j<3;j++){
                       // cout<<pre[k][i][j]<<"\t";
                    if(pre[k][i][j]!=s[i][j])
                       {

                        coutval+=pre[k][i][j]-s[i][j];//give value for each 2d
                        cout<<pre[k][i][j]<<" --"<<s[i][j]<<" = "<<pre[k][i][j]-s[i][j]<<endl;}
                   }
                }//2nd loop
                cout<<coutval;
                  if(coutval<minTotal)
                     minTotal=coutval;
            }//end of 3rd loop
            //cout<<minTotal<<endl;
            return minTotal;

}//end function


int main(){
  vector<vector<int>> s{{4, 8, 2}, {4, 5, 7}, {6, 1, 6}};
  for(int i = 0;i<3;i++){
    //cout<<endl;
    for(int j = 0;j<3;j++){
    //cout<<s[i][j]<<"\t";
    }
  }
  cout<<formingMagicSquare(s);
return 0;
}

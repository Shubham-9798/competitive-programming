#include<iostream>
using namespace std;

//dp using recursion
int minCoins(int coins[], int amount, int n){

if(amount==0)
    return 0;
 int ans = INT_MAX;
 int minC;
    for(int i=0;i<n;i++){
       if(amount-coins[i]>=0)
        {
          int smallAns = minCoins(coins, amount-coins[i], n);
          if(smallAns!=INT_MAX)
            ans = min(ans, smallAns+1);
        }

    }
    return ans;
}

//bottom up dp

int minCoinsDp(int coins[], int amountt, int n){
int *dp = new int[amountt+1];

for(int amt=0;amt<amountt+1;amt++){
        dp[amt] = INT_MAX;
}
dp[0] = 0;
for(int amt=1;amt<amountt;amt++){
    //iterate over coin
      for(int i=0;i<n;i++){
        if(coins[i]<=amt){
            int smallerAns = dp[amt-coins[i]];
            if(smallerAns!=INT_MAX){
                dp[amt] = min(dp[amt],smallerAns+1);
            }
        }
      }

}
return  dp[amountt];
}
int main(){
int coins[] = {1,7,10};
int amount = 15;
int n = 3;
cout<<minCoins(coins, amount, n)<<endl;

//cout<<minCoinsDp(coins, amount, n);
return 0;
}


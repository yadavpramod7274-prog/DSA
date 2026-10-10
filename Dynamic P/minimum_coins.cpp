#include<iostream>
#include<climits>
#include<vector>
 using namespace std;

   vector<int> coins;
  vector<int> dp ;
    int  f(int x){
        
        if(x==0) return 0;
         if(dp[x]!=-1) return dp[x];
          int res= INT_MAX;
           for(int i=0;i<coins.size();i++){
            if(x-coins[i]<0)continue;
             res= min(res,f(x-coins[i]));
           }
        return   dp[x]=1+ res;
    }
  int main(){
    int n,x;
    cin>>n>>x;
     for(int i=0;i<n;i++){
         int num;
          cin>>num;
          coins.push_back(num);
     }
     return 0;
  }
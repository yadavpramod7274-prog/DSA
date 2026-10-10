#include<iostream>
#include<vector>
#include<climits>
 using namespace std;
 vector<int>dig(int n){
     vector<int> ans;
      while(n>0){
        if(n%10 !=0){
            // n%10 is last digit
            ans.push_back(n%10);
        }

        n/=10;
      }
      return ans;
 }
 vector< int>dp;
int f(int n){
 if(n==0)return 0;
 if(n<=9) return 1;
 if(dp[n]!=-1)return dp[n];
  
  vector<int>v=dig(n);
  int ans=INT_MAX;

  for(int i=0;i<v.size();i++){
 ans=min(ans,f(n-v[i]));
  }
  return dp[n]= 1+ans;
}
int fbu(int num){
     dp[0]=0;
     for(int i=1;i<=9;i++) dp[i] = 1;
      for(int n=10;n<=num;n++){
         // n ->state
            // calc dp[n]
            vector<int>v=dig(n);
       int result=INT_MAX;

  for(int i=0;i<v.size();i++){
       dp[n] = min(dp[n],dp[n-dp[i]]);


  }
  dp[n]=1+result;
      }
}
  int main(){
  int n;
  cin>>n;
   cout<<f(n)<<"\n";
  }
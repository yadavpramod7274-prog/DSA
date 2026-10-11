#include<iostream>
#include<vector>
#define mod 1000000007

 using namespace std;

 int f(int n){
    if(n==0)return 1;
       int sum=0;
        for(int i=1;i<=6;i++){
            if(n-i<0)break;
             sum=(sum % mod + f(n-i)%mod)%mod;
        }
        return sum;
 }
 vector<int>dp(100000,-1);
 int fbu(int n){
   dp[0]=1;
for(int  k=1;k<=n;k++){
             int sum=0;
        for(int i=1;i<=6;i++){
            if(k-i<0)break;
             sum=(sum % mod + f(k-i)%mod)%mod;
        }
        dp[k]= sum%mod;
    }

 return dp[n];
 }
 int main(){
    int n;
     cin>>n;
     cout<<f(n)<<"\n";
     return 0;
 }
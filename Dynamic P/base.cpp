#include<iostream>
#include<vector>
#include<algorithm>
 #include<climits>
 using namespace std;
  int f(int n){
   
    if(n==1)return 1;
    if(n==2 || n==3)return 1;
     int inf=INT_MAX;
     return 1+ min({f(n-1),(n%2==0)? f(n/2): inf,(n%3==0)?f(n/3): inf});
  }
   
    int main(){
        int n;
         cin>>n;
        cout<<f(n)<<"\n";
        return 0;
    }
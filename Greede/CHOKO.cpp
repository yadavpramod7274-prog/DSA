#include<iostream>
 #include<vector>
 #include<algorithm>
   using namespace std;
  #define ll long long int
   bool cmp(int x,int y){
      return x,y;
   }
    ll mincostToBreakGrid(int n,int m,vector<ll>&x ,vector<ll>&y){
          sort(x.begin(),x.end(),cmp);
          sort(x.begin(),x.end(),cmp);
            int hz=1;
             int vr=1;
              int h=0 ,v=0;
              ll ans=0;
              while( h< y.size() and v <x .size()){
                if(x[v]>y[v]){
                    ans+=x[v]*vr;
                    hz++;
                    v++;
                } else {
                    ans+=y[v]*hz;
                    vr++;
                     h++;
                }
              }
              while(h < y.size()){
                  ans+=y[v]*hz;
                  vr++;
                  h++;
              }
                 while(h < x.size()){
                  ans+=x[v]*hz;
                  hz++;
                  v++;
              }
              return ans;

    }
 
    int main(){
           int n,m;
            cin>>n>>m;
             vector<ll>y,x;
              for(int i=0;i<m-1;i++){
                int k;
                cin>>k;
                 x.push_back(k);
              }
                    cout<<mincostToBreakGrid(n,m,y,x)<<"\n";
    }
    
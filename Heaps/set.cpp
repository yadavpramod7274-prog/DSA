#include<iostream>
#include<unordered_set>
#include<vector>
 using namespace std;
 int main(){
  vector<int>v={1,5,6,2,6,1};
     unordered_set<int> st;
      for(auto ele:v){
            st.insert(ele);
      }
      for(auto x:st){
        cout<<x<<" ";
       // cout<<endl;
        // if(st.find(6)!=st.end()) cout<<"yes/n";
        //  else cout<<"No\n";
      }
}
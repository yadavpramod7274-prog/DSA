#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    vector<int> v(5);
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
   sort(v.begin(),v.end());
   reverse(v.begin(),v.end());
for(int i=0;i<5;i++){
    cout<<v[i]<<" ";
}
}

// assending order
// 3 6 8  4 5 
// 3 4 5 6 8 
// reverse order
// 2 4 6 8 3 
// 8 6 4 3 2
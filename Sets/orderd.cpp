#include<iostream>
 #include<unordered_set>
   #include<map>
    using namespace std;
     int main(){
        //  unordered_set<int>s;
        //   s.insert(5);
        //    s.insert(3);
        //     s.insert(7);
        //     for(int ele:s){
        //          cout<<ele<<" ";
        //     }
         map<int,int>m;
         m[1] =30;
         m[3] = 40;
         m[2] = 50;
            for(auto x:m){
                 cout<<x.second<<" ";
            }
     }
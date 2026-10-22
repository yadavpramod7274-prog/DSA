#include<iostream>
 #include<vector>
  #include<algorithm>
  using namespace std;

   bool cmp (vector<int>&a,vector<int>&b){
      return a[1]<b[1];
  class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
         int ans=0;
        sort(intervals.begin(),intervals.end(),cmp);
         int  lastIntervals =intervals[0][1];
          for(int i=1;i<intervals.size();i++){
             if(intervals[i][0]<=lastIntervals){
                ans++;
             }else{
                lastIntervals=intervals[i][1];
             }
          }
          return intervals.size()-ans;
    }
};

//  int main(){
//      return 0;
//  }
#include<iostream>
 #include<vector>
   #include<algorithm>
  using namespace std;
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
       sort(people.begin(),people.end());
        int i=0;
        int bt=0;
        int j=people.size()-1;
          while(i<=j){
            if(people[i]+people[j]<=limit){
                 bt++; //allocate
                  i++;
                  j--;
            }
            else {
                bt++; // allocate a baat to the heaviest
                j--;
            }
          }
          return bt;
    }
};
  int main(){
     return 0;
  }
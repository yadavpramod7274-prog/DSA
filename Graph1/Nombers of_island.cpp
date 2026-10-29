#include<iostream>
  #include<queue>
   #include<vector>
    using namespace std;
        class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
         int cols = grid[0].size();
         int cc=0;
          for(int i=0;i<row;i++){
             for(int j=0;j<cols;j++){
                if(grid[i][j]=='0'){
                     // it is a water bsdy
                     continue;
                }
                 if(grid[i][j]=='-1'){
                     continue;
                }
                // new visited land pices found . new conneted component
                cc++;
                grid[i][j]= '0';
                  queue<pair<int,int> >q;
                   q.push({i,j});
                    while(!q.empty()){
                           auto curr=q.front();
                            q.pop();
                             // go to all visited neighbour of the curr node
                               int currRow =curr.first;
                                int currCol = curr.second;
                                // check up 
                                  if(currRow-1>=0 and grid[currRow-1][currCol ]=='1'){
                                      q.push({currRow-1,currCol });
                                      grid[currRow-1][currCol ]='0';
                                  }
                            
                                // check down 
                                  if(currRow+1<row and grid[currRow+1][currCol ]=='1'){
                                      q.push({currRow+1,currCol });
                                      grid[currRow+1][currCol ]='0';
                                  }
                                // check left
                                  if(currCol-1>=0 and grid[currRow][currCol-1 ]=='1'){
                                      q.push({currRow,currCol-1});
                                      grid[currRow][currCol -1]='0';
                                  }
                                   // check right 
                                  if(currCol+1 <cols and grid[currRow][currCol+1 ]=='1'){
                                      q.push({currRow,currCol+1 });
                                      grid[currRow][currCol+1]='0';
                                  }
                    }
             }
          }
          return cc;
    }
};
     int main(){

     }
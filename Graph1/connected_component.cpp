#include<iostream>
#include<vector>
#include<unordered_set>
 #include<list>
using namespace std;
vector<list<int>>graph;
     void add_edge(int src,int dest,bool bi_dir=true){
                  graph[src].push_back(dest);
                  if(bi_dir){
                    graph[dest].push_back(src);
                  }
         }
          void dfs(int node,unordered_set<int>&visited){
              visited.insert(node);
               for(auto neighbor: graph[node]){
                 if(!visited.count(neighbor)){
                      dfs(neighbor ,visited);
                 }
               }
          }
         int connected_components(int v){
            int result =0;
             unordered_set<int>visited;

                for(int i=0;i<v;i++){
                    
                    // go to every very
                        // if from a vertex we can intialaise a dfs ,wee got one more cc
                        if(visited.count(i)==0){
                            result++;
                            dfs(i,visited);
                        }
                 
                }
                return result;
         }
   int main(){
     int v;
         cin>>v;
     graph.resize(v,list<int>());
          int e;
           cin>>e;
           while(e--){
            int s;
            int d;
          
            cin>>s>>d;
             add_edge(s,d,false);
           }
             cout<<connected_components(v)<<"\n";
            
     return 0;
   }
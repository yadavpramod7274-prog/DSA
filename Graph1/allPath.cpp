#include<iostream>
#include<vector>
 #include<list>
 #include<unordered_set>
 using namespace std;
   vector<list<int>>graph;
   vector<vector<int>>result;
     unordered_set<int>visited;
  int v;
    void add_edge(int src,int dest,bool bi_dir=true){
                  graph[src].push_back(dest);
                  if(bi_dir){
                    graph[dest].push_back(src);
                  }
         }
         void dfs(int curr,int end,vector<int> &path){
             if(curr==end){
                path.push_back(curr);
                result.push_back(path);
                path.pop_back();
                return;
             }
              visited.insert(curr);
              path.push_back(curr);
        for(auto neighbor:graph[curr]){
            if(not visited.count(curr)){
                 dfs(neighbor,end,path);
                 
            }
        }
         path.pop_back();
          visited .erase(curr);
        return;
          }
  void allpath(int src,int dest){
             vector<int> v;
               dfs(src,dest,v);
          }
  int main(){
          cin>>v;
     graph.resize(v,list<int>());
          int e;
           cin>>e;
           while(e--){
            int s;
            int d;
            int w;
            cin>>s>>d>>w;
             add_edge(s,d);
           }
            int x,y;
             cin>>x>>y;
              allpath(x,y);
              cout<<result.size();
               for(auto path: result)
               for(auto  el : path){
                 cout<<el<<" ";
               }
               cout<<endl;
     return 0;
  }
 
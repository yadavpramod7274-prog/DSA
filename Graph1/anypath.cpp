#include<iostream>
#include<vector>
 #include<list>
 #include<unordered_set>
 using namespace std;
   vector<list<int>>graph;
     unordered_set<int>visited;
  int v;
    void add_edge(int src,int dest,bool bi_dir=true){
                  graph[src].push_back(dest);
                  if(bi_dir){
                    graph[dest].push_back(src);
                  }
         }
          bool dfs(int curr,int end){
             if(curr==end)return true;
       visited.insert(curr);
        for(auto neighbor:graph[curr]){
            if(not visited.count(curr)){
                 bool result = dfs(neighbor,end);
                 if(result) return true;
            }
        }
        return false;
          }
          bool  anypath(int src,int dest){
              visited.clear();
              return dfs(src,dest);
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
             add_edge(s,d,false);
           }
            int x,y;
             cin>>x>>y;
              cout<<anypath(x,y)<<"\n";
     return 0;
  }
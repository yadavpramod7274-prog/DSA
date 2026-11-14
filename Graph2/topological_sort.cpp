#include<bits/stdc++.h>

  using namespace std;
   vector<list<int>> graph;
   int  v;
    void add_edge(int a,int b,bool bidir=true){
        graph[a].push_back(b);
         if(bidir){
            graph[b].push_back(a);
         }
    }
    void topoBFS(){
        vector<int> indegree(v,0);
         for(int i=0;i<v;i++){
            for(auto nbr:graph[i]){
                indegree[nbr]++;
            }
         }
         queue<int>q;
         unordered_set<int> vis;
           for(int i=0;i<v;i++){
               if(indegree[i]==0){
                  q.push(i);
                   vis.insert(i);
               }
           }
           while(!q.empty()){
             int node = q.front();
              cout<<node<< " ";
               q.pop();
                  for(auto nbr : graph[node]){
                     if(! vis.count(nbr)){
                        indegree[nbr]--;
                          if(indegree[nbr]==0){
                             q.push(nbr);
                               vis.insert(nbr);
                          }
                     }
                  }
           }
    }

  int main(){
      cin>>v;
      int e;
      cin>>e;
       while(e--){
        int x,y;
         cin>>x>>y;
          add_edge(x,y,false);
       }
     return 0;
  }
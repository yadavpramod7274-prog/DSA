#include<iostream>
 #include<vector>
 #include<list>
 #include<unordered_map>
    using namespace std;
      vector<unordered_map<int,int>>graph;
        int v; // no of vertices
         void add_edge(int src,int dest, int weight,  vector<unordered_map<int,int>>graph,bool bi_dir=true){
                  graph[src].insert({dest,weight});
                  if(bi_dir){
                    graph[dest].insert({src,weight});
                  }
         }
           void display(){
            for(int i=0;i<graph .size();i++){
                cout<<i<<"->";
                 for(auto x:graph[i]){
                     cout<<x.first<<":"<<x.second<<" ";
                 }
                  cout<<endl;
            }           }

         int main(){
            cin>>v;
     graph.resize(v,unordered_map<int,int>());
          int e;
           cin>>e;
           while(e--){
            int s;
            int d;
            int w;
            cin>>s>>d>>w;
             add_edge(s,d,w,graph,false);
           }
            display();
             
         }
#include<iostream>
 #include<vector>
 #include<list>
    using namespace std;
      vector<list<pair<int,int>>>graph;
        int v; // no of vertices
         void add_edge(int src,int dest, int weight,  vector<list<pair<int,int>>>graph,bool bi_dir=true){
                  graph[src].push_back({dest,weight});
                  if(bi_dir){
                    graph[dest].push_back({src,weight});
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
     graph.resize(v,list<pair<int,int>>());
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
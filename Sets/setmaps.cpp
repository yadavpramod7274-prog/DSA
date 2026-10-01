#include<iostream>
#include<unordered_map>
 using namespace std;
//   class pair{
//     public:
//   }
  int main(){
   
    unordered_map< string,int> m;
     pair<string,int > p1;
     p1.first="pramod";
        p1.second= 90;
         pair<string,int > p2;
     p2.first="prince";
        p2.second= 85;
         pair<string,int > p3;
     p3.first="amit";
        p3.second= 95;
         m.insert(p1);
       m.insert(p2);
      m.insert(p3);
       m["ram"] = 65;
       m["kalama"] = 85;
      for(pair <string,int>p : m){
         cout<<p.first<<" "<< p.second<<endl;
      } 
      cout<<endl;
      m.erase("pramod");
      m.erase("ram");
      for(auto p: m){
         cout<<p.first<<" "<< p.second<<endl;
      } 
     
       }
  
 
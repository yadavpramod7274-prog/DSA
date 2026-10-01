#include<iostream>
 #include<queue>
  using namespace std;

  int main(){

    // MAX Heap
    //  priority_queue<int>pq;// maxHeap
    //  pq.push(12);
    //  pq.push(4);
    //   pq.push(-8);
    //    pq.push(19);
    //    cout<<pq.top()<<endl;
    //    pq.pop();
    //      cout<<pq.top()<<endl;


    // MIn Heap
     priority_queue<int,vector<int>,greater<int>>pq;// maxHeap
     pq.push(12);
     pq.push(4);
      pq.push(-8);
       pq.push(19);
       cout<<pq.top()<<endl;
       pq.pop();
         cout<<pq.top()<<endl;
  }
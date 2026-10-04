#include<iostream>

  using namespace std;
   class MinHeap {
   public:
   int arr[50];
   int idx ;
  

   MinHeap(){
    idx=1;
   }

int top(){
    return arr[1];
}

  void push(int x){
    arr[idx]=x; 
     int i=idx;
     i++;
     // swaping i with present and child 
     while(i!=1){
            int parent= i/2;
            if(arr[i]<arr[parent]){
                swap(arr[i],arr[parent]);
                
            }
             else break;

     }
     int size() {
        return idx-1;
     }
  }
   };
   int main(){
        MinHeap pq ;
         pq.push(10)
         pq.push(20)
          cout<<pq.size()<endl;
         pq.push(11)
         cout<<pq.top()<endl;
          cout<<pq.size()<endl;
   }

#include<iostream>
 using namespace std;
        class MinHeap{
            public:
            int arr[50];
           int  idx =1;
           MinHeap(){
            idx=1;
           }
            int top(){
                    return arr[1];
            }
            void push(int x){
                arr[idx]=x;
                int i=idx;
                idx++;
                // swapinng of i with parent
                while(i!=1){
                    int parent= i/2;
                     if(arr[i]<arr[parent]);{
                      swap(arr[i],arr[parent]);
                    }
                      break;
                      i= parent;
                }
            }
            void pop(){
                idx--;
                 arr[1]=arr[idx];
                 // rearrangement
                 int i=1;
                 while(true){
                    int left=2*i;
                    int right= 2*i+1;
                        if(left>idx-1) break;
                          if(right>idx-1){
                             
                          }
                     if(arr[left]<arr[right] ){
                         if(arr[i]>arr[left]){
                        swap(arr[i],arr[left]);
                          i= left;
                        }
                        else break;
                     }
                     else{
                         if(arr[i]>arr[right]){
                      swap(arr[i],arr[right]);
                          i= right; 
                         }
                         else break;
                     }
                 }
            }
            int size(){
                return idx-1;
            }
            void display(){
                for(int i=1;i<idx-1;i++){
                    cout<<arr[i]<<" ";
                }
                 cout<<endl;
            }
        } ;
  int main(){
        MinHeap pq ;
            pq.push(10);
           pq.push(20);
           pq.push(30);
           cout<<pq.size()<<" "<<pq.top()<<endl;
            pq.push(55);
          
           pq.push(45);
           pq.push(56);
            cout<<pq.size()<<" "<<pq.top()<<endl;
              pq.display();
               pq.pop();
                 cout<<pq.size()<<" "<<pq.top()<<endl;
                  pq.display();

  
    } 
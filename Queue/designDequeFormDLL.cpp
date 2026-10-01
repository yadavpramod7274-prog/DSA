#include<iostream>
  using namespace std;
   class Node{
    public:
    int val;
    Node* next;
    Node* prev;
     Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
     }
  };

  class Deque{
     public :
     Node* head;
     Node* tail;
      int s;
     
      Deque(){
        head=tail=NULL;
        s=0;
      }
      void  pushBack (int val){
        Node* temp=new Node(val);
         if(s==0) head=tail=temp;
         else{
           tail->next=temp;
           temp->prev=tail;
           tail=temp; 
         }
         s++;
       }
        void pushfront( int val){
        Node* temp=new Node(val);
         if(s==0) head=tail=temp;
         else{
            temp->next=head;
          head->prev=temp;
           head=temp;
         }
         s++;
           
       } 
        void popfront(){
            if(s==0){
                cout<<"List is Empty!";
                return;
            }
            head=head->next;
            if(head!=NULL)head->prev=NULL;// extra
             if(head==NULL)tail=NULL;// extra
             s--;
        }
        void popBack(){
            if(s==0){
                cout<<"List is Empty!";
                 return;
            }
            Node*temp=tail->prev;
             temp->next=NULL;
             tail=temp;
        }
        int front(){
        if(s==0){
            cout<<"Queue is Empty";
        
        return -1;
    }
       return head->val;   
        
    }
  int back(){
     if(s==0){
         cout<<"Queue is Empty";
    return -1;
        } 
     return tail->val;
  }
  int size(){
    return s;
  }
  bool empty(){
    if(s==0) return true;
     else false;
  }

         void display(){
        Node*temp=head;
         while(temp!=NULL){
          cout<<temp->val<<" ";
           temp=temp->next;
         }
          cout<<endl;
         }
  };
   int main(){
      Deque dq; //= new LinkedList();
       dq.pushBack(10);
        dq.pushBack(20);
         dq.pushBack(30);
          dq.pushBack(40);
          dq.popBack();
          dq.display();
          dq.popfront();
          dq.display();
          dq.front();
   }
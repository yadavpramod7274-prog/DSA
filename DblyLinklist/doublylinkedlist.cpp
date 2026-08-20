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

  class DLL{
     public :
     Node* head;
     Node* tail;
      int size;
     
      DLL(){
        head=tail=NULL;
         size=0;
       }
       void insertAtEnd( int val){
        Node* temp=new Node(val);
         if(size==0) head=tail=temp;
         else{
           tail->next=temp;
           temp->prev=tail;
           tail=temp; 
         }
         size++;
       }
        void insertAtHead( int val){
        Node* temp=new Node(val);
         if(size==0) head=tail=temp;
         else{
            temp->next=head;
          head->prev=temp;
           head=temp;
         }
         size++;
       }
       void insertAtIdx(int idx,int val){
        if(idx<0 || idx>size) cout<<" Invalid Index"<<endl;
         else if(idx==0)insertAtHead( val); 
        else if(idx==size)insertAtEnd( val); 
        else{
            Node* t=new Node(val);
            Node*temp=head;
             for(int i=1;i<=idx-1;i++){
               temp= temp->next;
             }
             t->next=temp->next;
             temp->next=t;
             t->prev=temp;
             t->next->prev=t;
             size++;
        }
       } 
        void deleteAtHead(){
            if(size==0){
                cout<<"List is Empty!";
                return;
            }
            head=head->next;
            if(head!=NULL)head->prev=NULL;// extra
             if(head==NULL)tail=NULL;// extra
             size--;
        }
        void deleteAtEnd(){
            if(size==0){
                cout<<"List is Empty!";
                 return;
            }
            Node*temp=tail->prev;
             temp->next=NULL;
             tail=temp;
        }
         void deleteAtIdx(int idx){
            if(size==0){
                cout<<"List is Empty!";
                  return;
            }
        else if (idx<0 || idx>size) cout<<" Invalid Index"<<endl;
         else if(idx==0)deleteAtHead( ); 
        else if(idx==size-1)deleteAtEnd( ); 
        else{
           
            Node*temp=head;
             for(int i=1;i<=idx-1;i++){// travese to idx-1
               temp= temp->next;
             }
            temp->next=temp->next->next;
             temp->next->prev=temp;
               temp->next=tail;
            size--;
        }
       } 
      int getAtIdx(int idx){

       if (idx<0 || idx>size){ cout<<" Invalid Index";
            return -1;}
         else if(idx==0) head->val; 
        else if(idx==size-1)tail->val; 
        else{
           if(idx<size/2){
            Node*temp=head;
             for(int i=1;i<=idx-1;i++){// travese to idx-1
               temp= temp->next;
             }
           return temp->val;
        }
        else {// idx> size/2
         Node*temp=tail;
         for(int i=1;i<size-idx;i++){
          temp=temp->prev;
         }
         return temp->val;
        }
      }
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
      DLL ll ; //= new LinkedList();
     ll.insertAtEnd(10);
      ll.display();
      ll.insertAtEnd(20);
    ll.display();
     ll.insertAtEnd(30);
      ll.display();
      ll.insertAtEnd(40);
    ll.display();
    ll.insertAtHead(60);
     ll.display();
     ll.insertAtIdx(2,99);
     ll.display();
       ll.deleteAtHead();
     ll.display();
       ll.deleteAtEnd();
     ll.display();
      ll.insertAtHead(60);
     ll.display();
      ll.deleteAtIdx(2);
    ll.display();
      
     ll.insertAtEnd(65);
      ll.insertAtEnd(75);
    ll.display();

    cout<<ll.getAtIdx(4);
}
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
   void display(Node* head){
    while(head){
        cout<<head->val<<" ";
         head=head->next;
    }
   }
   void displayRec(Node* head){

        if(head==NULL) return;
        displayRec(head->next);
        cout<<head->val<<" ";
        
    }
    void displayRev(Node*tail){
        while(tail){
            cout<<tail->val<<" ";
            tail=tail->prev;
        }
    }

   int main(){
    // 10 20 30 40 50
    Node*a= new Node(10);
     Node*b= new Node(20);
      Node*c= new Node(30);
       Node*d= new Node(40);
        Node*e= new Node(50);

        a->next=b;
         b->next=c;
          c->next=d;
           d->next=e;
           
           e->prev=d;
              d->prev=c;
                 c->prev=b;
                    b->prev=a;
                  //  displayRec(a);
                     displayRev(e);
   }
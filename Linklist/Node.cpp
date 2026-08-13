#include<iostream>
 using namespace std;
 class Node{ // link list
    public :
    int val;
    Node*next;
      Node(int val){
        this->val=val;
        this->next=NULL;
      }
 };
   void display(Node*head){
      Node* temp=head;
        while(temp!=NULL){
            cout<< temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
     int size(Node*head){
      Node* temp=head;
       int n=0;
        while(temp!=NULL){
            n++;
           // cout<< temp->val<<" ";
            temp=temp->next;
        }
   
    return n ;
   
   }
    void reDisplay(Node*head){
       if(head==NULL) return;
     
    reDisplay(head->next);
       cout<<head->val<<" ";
       //cout<<endl;
    }
    
   void displayrec(Node*head){
     if(head==NULL) return;
     cout<<head->val<<" ";
      displayrec(head->next);
   }
  int main(){
     Node*a =new Node(10);
          Node*b =new Node(20);
               Node*c =new Node(30);
                    Node*d =new Node(40);
            a->next=b;
             b->next=c;
             c->next=d;
             cout<<a->val<<endl;
            
             cout<<b->val<<endl;

             cout<<a->next->next->next->val<<endl;
            // display(a);
    // displayrec(a);
            reDisplay(a);

           
  }
#include<iostream>
 using namespace std;
 class Node{
    public:
     int val;
       Node*left;
        Node*right;

         Node(int val){
            this->val=val;
             this->left=NULL;
             this->right=NULL;
         }
 };
  void displayTree(Node* root){
    if(root==NULL) return;
     cout<<root->val<<" ";
     displayTree(root->left);
     displayTree(root->right);

  }
  int SUM(Node* root){
    if(root==NULL) return 0;
    int ans= root->val + SUM(root->left)+SUM(root->right);
     return ans;
  }
   int MAXTree(Node*root){
    if(root==NULL) return 0;
    int lMax=MAXTree(root->right);
    int rMax=MAXTree(root->right);
     return max(root->val,max(lMax,rMax));
    }
    int Level(Node*root){
    if(root==NULL) return 0;
   
     return 1+ max( Level(root->left), Level(root->right));
    }
  int main(){
        Node* a=new Node(1);
          Node* b=new Node(2);
           Node* c=new Node(3);
               Node* d=new Node(4);
               Node* e=new Node(5);
                    Node* f=new Node(6);
                Node* g=new Node(7);

                a->left=b;
                a->right=c;
                b->left=d;
                b->right=e;
                c->left=f;
                c->right=g;
            displayTree(a);
            cout<<endl;
             cout<<SUM(a);
             cout<<endl;
             cout<<MAXTree(a);

               cout<<endl;
             cout<<Level(a);
  }
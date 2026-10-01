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
  void  preorder(Node* root){
    if(root==NULL) return;  // base case
     cout<<root->val<<" ";// work
      preorder(root->left); // call1
      preorder(root->right); // call2

  }
  
   void  Inorder(Node* root){
    if(root==NULL) return;  // base case
     Inorder(root->left); // call1
      cout<<root->val<<" ";// work
     Inorder(root->right); // call2

  }
    void  postorder(Node* root){
    if(root==NULL) return;  // base case postorder
     postorder(root->left); // call1
     postorder(root->right); // call2
         cout<<root->val<<" ";// work

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
                 preorder(a);
                 cout<<endl;
                 Inorder(a);
                 cout<<endl;
                 postorder(a);
 }
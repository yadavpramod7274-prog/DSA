 #include<iostream>
 #include<queue>
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

  void nthLevel(Node* root,int curr,int level){
    if(root==NULL) return;  // base case
      if(curr==level){
        cout<<root->val<<" ";
        return;
         }// work
     nthLevel(root->left,curr+1,level); // call1
     nthLevel(root->right,curr+1,level); // call2

  }
 int Level(Node*root){
    if(root==NULL) return 0;
   
     return 1+ max( Level(root->left), Level(root->right));
    }
     void nthLevelRev(Node* root,int curr,int level){
    if(root==NULL) return;  // base case
      if(curr==level){
        cout<<root->val<<" ";
        return;
         }// work
    nthLevel(root->right,curr+1,level); // call2
     nthLevel(root->left,curr+1,level); // call1


  }
    void levelorder(Node*root){
        int n=Level(root);
        for(int i=1; i<=n; i++){
            nthLevelRev(root,1,i); 
            cout<<endl;
        }
    }
    
  
     void leveloderQueue(Node* root){ // BFS ->VIMP
        queue< Node*> q;
         q.push(root);
          while(q.size()>0){
            Node* temp=q.front();
            q.pop();
             cout<<temp->val<<" ";

             if(temp->left!=NULL) q.push(temp->left);
              if(temp->right!=NULL) q.push(temp->right);
          }
          cout<<endl;
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
              
             leveloderQueue(a); 
                
 }
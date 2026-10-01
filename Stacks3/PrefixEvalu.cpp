#include<iostream>
 #include<stack>
 using namespace std;
  int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
     else return 2;// *,/
  }
   int solve(int val1,int val2,int ch){
   if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
   else return val1/val2;
   }
   int main(){
     string s = "-/*+79483"; // infix Evaluation
     // cout<<s;
      // we need two stacks 1 for vals, 1 for ops
       stack<int> val;
          for(int i=s.size()-1;i>=0;i--){
            // check if  s[i] is digit (0 - 9);
             if(s[i]>=48 && s[i]<=57){// digit
              val.push(s[i]-48);
             } 
             else { // s[i] it is -> *,/,+,-,(,);
                int val1= val.top();
                val.pop();
                int val2= val.top();
                val.pop();
               int ans= solve(val1,val2,s[i]);
                val.push(ans);
                  }
             
                }

                 // work priority(s[i])<=priority(op.top())
                    // i hane to do val1 op val2
                   

cout<<val.top()<<endl ;
 cout<< (7+9)*4/8-3;

 }
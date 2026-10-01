#include<iostream>
 #include<stack>
 using namespace std;
  int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
     else return 2;// *,/
  }
  string solve (string val1,string val2,int ch){
    string s="";
     s+=val1;
     s.push_back(ch);
      s+=val2;
       return s;
   }
   int main(){
     string s = "7+9*4/8-3"; // infix Evaluation
     // cout<<s;
      // we need two stacks 1 for vals, 1 for ops
       stack<string> val;
          for(int i=0;i<s.size();i++){
            // check if  s[i] is digit (0 - 9);
             if(s[i]>=48 && s[i]<=57){// digit
              val.push(to_string(s[i]-48));
             } 
             else { // s[i] it is -> *,/,+,-,(,);
               string val2 = val.top();
                val.pop();
                string val1 = val.top();
                val.pop();
               string ans = solve(val1,val2,s[i]);
                val.push(ans);
                  }      
                }
                 // work priority(s[i])<=priority(op.top())
                    // i hane to do val1 op val2
         cout<<val.top()<<endl ;
         cout<<"7+9*4/8-3";
     }
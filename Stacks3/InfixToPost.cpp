#include<iostream>
 #include<stack>
 using namespace std;
  int prio(char ch){
    if(ch=='+' || ch=='-') return 1;
     else return 2;// *,/
  }
  string solve(string val1,string val2,char ch){
  // we have to store prefix in the ans
   // prefix is ->op v1 v2;
    string s="";
    
     s += val1;
      s += val2;
       s.push_back(ch); 
       return s;
  }
  
   int main(){
     string s = "(7+9)*4/8-3"; // infix Evaluation
     // cout<<s;
      // we need two stacks 1 for vals, 1 for ops
       stack<string> val;
        stack<char>op;
          for(int i=0;i<s.size();i++){
            // check if  s[i] is digit (0 - 9);
             if(s[i]>=48 && s[i]<=78){// digit
              val.push(to_string(s[i]-48));
             }
             else { // s[i] it is -> *,/,+,-,(,);
                 if(op.size()==0 ) op.push(s[i]);
                  else if(op.top()=='(') op.push(s[i]);
                  else if(s[i]=='(') op.push(s[i]);
                   else if (s[i]==')'){
                    while(op.top()!='('){
                         char ch= op.top();
                        op.pop();
                         string val2 = val.top();
                          val.pop();
                           string val1 = val.top();
                            val.pop();
                  string ans= solve(val1,val2,ch);
                   val.push(ans); 
                                        }
                op.pop();// opening bracket ko uda do
                  }
                 else if (prio(s[i])>prio(op.top()))  op.push(s[i]);
                 

                 else{// work priority(s[i])<=priority(op.top())
                    // i hane to do val1 op val2
                     while(op.size()>0 && prio(s[i])<=prio(op.top())){
                        // i have to do val1 op val2
                        char ch= op.top();
                        op.pop();
                         string val2 = val.top();
                          val.pop();
                           string val1 = val.top();
                            val.pop();
                  string ans= solve(val1,val2,ch);
                   val.push(ans);
             }
              op.push(s[i]);
          }
   }
}  
while(op.size()>0){// work
       char ch= op.top();
                        op.pop();
                         string val2 = val.top();
                          val.pop();
                          string val1 = val.top();
                            val.pop();
              string ans= solve(val1,val2,ch);
                   val.push(ans);
}
cout<<val .top()<<endl ;

 }
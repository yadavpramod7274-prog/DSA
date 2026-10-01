#include<iostream>
 #include<stack>
  using namespace std;
  int main(){
    stack<int>st;
     cout<<st.size()<<endl;// 0

      st.push(10);// 1
      st.push(20);// 2
       st.push(30);// 3
        st.push(40);// 4
        st.push(50);
  }
    // // cout<<st.size()<<endl; // 4
    // //  st.pop();// detele 40
    // //    cout<<st.size()<<endl;// 3
    // //     cout<<st.top();
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }


     //  we will use extra strack;
    //   stack<int>temp;
    //   while(st.size()>0){
    //     cout<<st.top()<<" ";
    //      int x=st.top();                
    //     st.pop();
    //      temp.push(x);
    // }
    // while(temp.size()>0){
    //      int x=temp.top();                
    //     temp.pop();
    //      st.push(x);
    // }
    //  cout<<endl<<st.top();
    
      //method =2
    // stack<int>temp;
    //   while(st.size()>0){
    //     cout<<st.top()<<" ";
                       
    //     temp.push(st.top());
    //      st.pop();
    // }
    // while(temp.size()>0){
       
    //  st.push(temp.top());
    // temp.pop();
    // }
    //  cout<<endl<<st.top();


      // bottom to top
  //      stack<int>temp;
  //     while(st.size()>0){
  //       temp.push(st.top());
  //        st.pop();
  //   }
  //   while(temp.size()>0){
  //       cout<<temp.top()<<" ";
                       
  //    st.push(temp.top());
  //   temp.pop();
  //   }
  //    cout<<endl<<st.top();
  // }
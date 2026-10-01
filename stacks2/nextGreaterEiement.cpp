// #include<iostream>
//  #include<stack>
//  #include<vector>
//   using namespace std;

//    int main(){
//      int arr[] ={3,1,2,7,4,6,2,3};
//       int n=sizeof(arr)/sizeof(arr[0]);
//        for(int i=0;i<n;i++){
//           cout<<arr[i]<<" ";
//        }
//        cout<<endl;
//        // next Greter Element Array
//         vector<int>nge(n);
//        brute forse method
//          for(int i=0;i<n;i++){
//               nge[i]=-1;
//              for(int j=i+1;j<n;j++){
//                 if(arr[j]>arr[i]){
//                     nge[i]=arr[j];
//                 } 
//              }
//             }
//           for(int i=0;i<n;i++){
//             cout<<nge[i]<<" ";
//           }
//    }


   // using stack method

   #include<iostream>
 #include<stack>
 #include<vector>
  using namespace std;

   int main(){
     int arr[] ={3,1,2,7,4,6,2,3};
      int n=sizeof(arr)/sizeof(arr[0]);
       for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
       }
       cout<<endl;
       // next Greter Element Array
        //int nge(n);
         // using stack pop, ans, push
     vector <int> nge(n);
          stack<int> st;
           nge[n-1]=-1;
            st.push(arr[n-1]);
            for(int i=n-2;i>=0;i--){
              // pop all the element smaller than arr[i];
              while( st.size()>0 && st.top()<=arr[i]){
                st.pop();
                  }
                  // mark the array;
               if(st.size()==0)  nge[i]=-1;  
                else nge[i]=st.top();
                // push the arr[i]
                 st.push(arr[i]);
            
            }

            for(int i=0;i<n;i++){
              cout<<nge[i]<<" ";
            }
            cout<<endl;
          }
   
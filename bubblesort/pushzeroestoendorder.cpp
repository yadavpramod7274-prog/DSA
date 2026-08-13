#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{
    int arr[]={ 5,0,1,2,0,0,4,0,3};
    int n=9;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
     // bubble sort 
     for(int i=0;i<n-1-i;i++){  // n-1 passes 
        // traverse 
        for(int j=0;j<n-1;j++){
            if(arr[j]==0){  // swap
                swap(arr[j],arr[j+1]);
            }

        }
    }
        cout<<endl;
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
     }
    }

// 5 0 1 2 0 0 4 0 3 
// 5 1 2 4 3 0 0 0 0



  // time com ty is very less 
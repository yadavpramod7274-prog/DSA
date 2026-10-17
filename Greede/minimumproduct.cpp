#include<iostream>
 #include<vector>
  using namespace std;
   int miniprofit(vector<int> &arr){
    int cn=0,cz=0 ,cp=0;
      for(int i=0;i<arr.size();i++){
         if(arr[i]<0)cn++;
         if(arr[i]==0)cz++;
          if(arr[i]>0)cp++;

      }
      if(cn==0){
        if(cz>0)return 0;
         else{
                auto it=min(arr.begin(),arr.end());
                 return *it;
         }
      }
      else{
        if(cn%2==0){
            // even
        }
        else{
            // odd
        }
      }
   }
    int main(){
        return 0;
    }
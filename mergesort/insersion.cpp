// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     // int arr[] {}
//     int arr[] ={5,1,8,2,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     vector<int > v(arr,arr+n); // same as arr ,copy
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     int count =0;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(v[i]>v[j]) count ++;
//         }
//     }
//     cout<<count;
//     }
//     5 1 8 2 3
// 5


#include<iostream>
#include<vector>
using namespace std;
//  int c=0;
 int inversion(vector<int>&a,vector<int>& b) {
    int count =0;
    int i=0; //a 
    int j=0;//b
    while(i<a.size() &&j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
        }
        else{ // a[i]<=b[j]
            i++;

        }
    }
    return count;
 }
void merge(vector<int>&a,vector<int>& b,vector<int>& res ){
    int i=0,j=0,k=0; 
    // int c=0; 
  
    while(i<a.size() && j<b.size())
        if(a[i]<=b[j])
            res[k++]=a[i++];
        
        else 
            res[k++] =b[j++];
        
    
    if(i==a.size())
        while(j<b.size())
            res[k++] =b[j++];
    
    if(j==b.size()) 
        while(i<a.size())
            res[k++] =a[i++];
        
    
}
int  mergesort(vector<int> & v){
    int n=v.size();
    if(n==1) return 0; 
    int n1=n/2,n2=n-n/2;
    vector<int> a(n1),b(n2);
    // copy pasting 
    for(int i=0;i<n1;i++)
        a[i] =v[i];
    
    // for(int i=0;i<n2;i++)
    //     a[i] =v[i];
    
    for(int i=0;i<n2;i++)
        b[i]=v[i+n1];
        int count =0;
    
    // magic  aka recursion
    count += mergesort(a);
       count += mergesort(b);
    // count the inversion 
    count+=inversion (a,b);
    // merge
    merge(a,b,v);
    a.clear();
     b.clear();
     return count;

}
int main(){
    int arr[] ={5,1,3,0,4,2,6};   //8 
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int > v(arr,arr+n);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // mergesort(v);
    
    cout<<mergesort(v);
}
//  5 1 3 0 4 2 6 
// 9
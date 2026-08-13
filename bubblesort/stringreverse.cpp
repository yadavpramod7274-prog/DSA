#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main()
{

    string  s="ABZRYXBDJK";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
 int n=s.size();
    for(int i=0;i<n-1;i++){
        if(s[i]>'X'){
            swap(s[i],s[i+1]);
        }
    }
    cout<<"modify string:"<<s<<endl;
    cout<<">x string:";
            for(int i=0;i<str.size();i++){
    cout<<str[i]<<" ";
        }
        return 0; 

}

// modify string:ABRYXBDJKZ
// >x string:Z Y X 
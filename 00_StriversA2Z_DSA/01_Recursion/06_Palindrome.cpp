#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string fun(string s,int i,int j){   
    if(s[i]==s[j] && i<j){
        return fun(s,i+1,j-1);
    }
    if(s[i]!=s[j] && i<j)
    {
        return "False";
    }
    return "True";  
}
int main(){
    string s="malayalam";
    cout<<fun(s,0,s.length()-1);

    return 0;
}
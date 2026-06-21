#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    string t;
    cin >> s;
    cin >> t;
    string temp=s;
 
    for(int i=0; i<s.length(); i++){
        temp[i] = s[s.length()-(i+1)];
    }
 
    if(temp == t){
        cout << "YES";
    }else{
        cout << "NO";
    }
 
    return 0;
 
}
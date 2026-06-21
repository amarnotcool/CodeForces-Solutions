#include<bits/stdc++.h>
using namespace std;
 
string convertString(string s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }
 
    return s;
}
 
int main(){
    string s1, s2;
    cin >> s1;
    cin >> s2;
 
    if((convertString(s1))==(convertString(s2))){
        cout << 0;
    }else if((convertString(s1)<convertString(s2))){
        cout << -1;
    }else{
        cout << 1;
    }
 
    return 0;
}
 
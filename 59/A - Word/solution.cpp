#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin >> s;
 
    string lower = s;
    string upper = s;
    int uppercase = 0;
 
    for(int i=0; i<s.length(); i++){
        lower[i] = tolower(s[i]);
        upper[i] = toupper(s[i]);
 
        if(s[i]!=lower[i]){
            uppercase++;
        }
    }
 
    int lowercase = s.length() - uppercase;
 
    if(lowercase>=uppercase){
        cout << lower;
    }else{
        cout << upper;
    }
 
    return 0;
 
}
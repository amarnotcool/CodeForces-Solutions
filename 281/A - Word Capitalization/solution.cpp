#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s1;
    cin >> s1;
 
    for(int i=0; i<s1.length(); i++){
        if(i==0){
            s1[i] = toupper(s1[i]);
        }else{
            continue;
        }
    }
 
    cout << s1 << endl;
    return 0;
}
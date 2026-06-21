#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
 
        string check = "codeforces";
        int count = 0;
 
        for(int i=0; i<10; i++){
            if(s[i] != check[i]){
                count++;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}
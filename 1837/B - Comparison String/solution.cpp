#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count = 1;
        int bada = 0;
 
        for(int i=0; i<n-1; i++){
            if(s[i] == '>' && s[i+1] == '>'){
                count++;
            }
 
            if(s[i] == '<' && s[i+1] == '<'){
                count++;
            }
 
            if((s[i] == '<' && s[i+1] == '>') || (s[i] == '>' && s[i+1] == '<')){
                bada = max(bada, count);
                count = 1;
            }
        }
            
        bada = max(bada, count);
        cout << bada + 1 << endl;
    }
    return 0;
}
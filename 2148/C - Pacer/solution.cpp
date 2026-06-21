#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n,m;
        cin >> n >> m;
 
        int score = 0;
        int lasta = 0;
        int lastb = 0;
 
        for(int i=0; i<n; i++){
            int a, b;
            cin >> a >> b;
 
            int gap = a-lasta;
 
            if(lastb == b){
                if(gap % 2 == 0){
                    score += gap;
                }else{
                    score += gap - 1;
                }
            }else{
                if(gap % 2 != 0){
                    score += gap;
                }else{
                    score += gap - 1;
                }
            }
            
            lasta = a;
            lastb = b;
        }
        
        if(lasta != m){
            score += m-lasta;
        }
 
        cout << score << endl;
    }
    return 0;
}
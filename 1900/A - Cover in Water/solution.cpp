#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        string water;
        
        cin >> water;
        
        int count=0;
        for(int i=0; i<n ; i++){
            if(i+2<n && water[i]=='.' && water[i+1]=='.' && water[i+2]=='.'){
                count = 2;
                break;
            }
            if(water[i]=='.'){
                count++;
            }else{
                continue;
            }
        }
 
        cout << count << endl;
    }
}
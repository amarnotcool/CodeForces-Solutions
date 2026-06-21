#include<bits/stdc++.h>
using namespace std;
#define int long long
 
int checkSum(int y){
    int sum = 0;
    while(y>0){
        int r = y%10;
        y = y/10;
        sum = sum + r;
    }
 
    return sum;
}
 
signed main(){
    int t;
    cin >> t;   
 
    while(t--){
        int x;
        cin >> x;
        int count = 0;
 
        for(int i=x; i<=x+81; i++){
            if(i - checkSum(i) == x ){
                count++;
            }
        }
 
        cout << count << endl;
    }
 
    return 0;
}
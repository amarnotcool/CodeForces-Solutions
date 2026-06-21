#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        int power = 1;
        int count = 0;
 
        while(power<=n){
            for(int i=1; i<10; i++){
                if(i*power <= n){
                    count ++;
                }
            }
            power *= 10;
        }
 
        cout << count << endl;
    }
}
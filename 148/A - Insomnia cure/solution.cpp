#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int k, l, m, n, d;
    cin >> k;
    cin >> l;
    cin >> m;
    cin >> n;
    cin >> d;
    int check[4]={k,l,m,n};
    int count = 0;
 
    for(int i=1; i<=d; i++){
        for(int j=0; j<4; j++){
            if(i%check[j]==0){
                count++;
                break;
            }
        }
    }
 
    cout << count << endl;
    return 0;
 
}
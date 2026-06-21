#include<bits/stdc++.h>
using namespace std;
#define int long long
    
signed main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> arr(n);
        int chota = INT_MAX;
        int phele;
        bool allSame = false;
 
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(i==0){
                phele = arr[i];
            }
            chota = min(chota, arr[i]);
        }
 
        for(int i=0; i<n; i++){
            if(arr[i] == phele){
                allSame = true;
            }else{
                allSame = false;
                break;
            }
        }
        
        vector <int> b;
        vector <int> c;
        
        
        sort(arr.begin(), arr.end());
 
        if(allSame == true){
            cout << -1 << endl;
        }else{           
            for(int i=0; i<n; i++){
                if(arr[i] == chota){
                    b.push_back(arr[i]);
                }else{
                    c.push_back(arr[i]);
                }
            }
            
            cout << b.size() << " " << c.size() << endl;
            
            for(int i=0; i<b.size(); i++){
                cout << b[i] << " ";
            }
            
            cout << endl;
            
            for(int i=0; i<c.size(); i++){
                cout << c[i] << " ";
            }
            
            cout << endl;
        }
    }
    return 0;
}
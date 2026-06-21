#include<bits/stdc++.h>
using namespace std;
#define int long long
    
void fast_io() {
std::ios_base::sync_with_stdio(false);
std::cin.tie(NULL);
std::cout.tie(NULL);
}
    
signed main(){
    fast_io();
    
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        int minOfAll = INT_MAX;
        vector <int> secondMinofArray;
 
        for(int i=0; i<n; i++){
            int m;
            cin >> m;
            vector <int> arr(m);
 
            for(int i=0; i<m; i++){
                cin >> arr[i];
            }
 
            sort(arr.begin(), arr.end());
 
            minOfAll = min(minOfAll, arr[0]);
            secondMinofArray.push_back(arr[1]);
        }
 
        sort(secondMinofArray.begin(), secondMinofArray.end());
 
        int minOfSecond = secondMinofArray[0];
 
        int totalSum = 0;
        for(int i=1; i<n; i++){
            totalSum += secondMinofArray[i];
        }
 
        int maximum = totalSum + minOfAll;
 
        cout << maximum << endl;
    }
    
    return 0;
}
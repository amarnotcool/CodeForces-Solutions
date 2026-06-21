#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<cmath>
#define int long long
using namespace std;
signed main()
{
    int n;
    cin >> n;
    int arr[n];
    int chota = INT_MAX;
 
    for(int i=0; i<n; i++){
        cin >> arr[i];
 
        if(arr[i]==0){
            cout << 0;
            return 0;
        }else{
            int hehe = abs(arr[i]);
            chota = min(hehe, chota);
        }
 
    }
        cout << chota;
    return 0;
}
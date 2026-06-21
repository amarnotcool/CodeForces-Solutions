#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n, x;
        cin >> n >> x;
        int gasStations[n];
        int fuel = 0;
        int distance = 0;
 
        for(int i=0; i<n; i++){
            cin >> gasStations[i];
        }
 
        for(int i=1; i<=x; i++){
            fuel++;
            for(int j=0; j<n; j++){
                if(i==gasStations[j]){
                    distance = max(distance, fuel);
                    fuel=0;
                }
            }
        }
 
        for(int i=x-1; i>0; i--){
            fuel++;
            for(int j=n-1; j>=0; j--){
                if(i==gasStations[j]){
                    distance = max(distance, fuel);
                    fuel=0;
                }
            }
        }
 
        cout << distance << endl;
    }
 
    return 0;
}
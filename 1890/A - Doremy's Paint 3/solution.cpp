#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector <int> v(n);
 
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
 
        if(n==2){   
            cout << "Yes" << endl;
            continue;
        }
 
        int x = v[0];
        bool allElementSame = false;
        int y;
        int positionofY;
           
        for(int i=1; i<n; i++){
            if(v[i] != x){
                y = v[i];
                positionofY = i;
                break;   
            }
        }
        
        int countX = 1;
        int countY = 0;
 
        for(int i=1; i<n; i++){
            if(v[i] == x){
                allElementSame = true;        
            }else{
                allElementSame = false;
                break;
            }
        }
 
        for(int i=1; i<n; i++){
            if(v[i]==x){
                countX++;
            }else if(v[i]==y){
                countY++;
            }
 
        }
        
        if(allElementSame == true){
            cout << "Yes" << endl;
            continue;
        }
 
        bool secondLastConditionSatisfy = false;
 
        for(int i=positionofY+1; i<n; i++){
            if((v[i] != x) && (v[i] != y)){    
                secondLastConditionSatisfy = true;
                cout << "No" << endl;
                break;
            }else{
                secondLastConditionSatisfy = false;
            }
        }
 
        if(secondLastConditionSatisfy == false){
            if((countX==countY) || (countX == countY+1) || (countY == countX+1)){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }
    }
}
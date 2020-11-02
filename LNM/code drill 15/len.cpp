#include<bits/stdc++.h>
using namespace std;

#define forn(i,a,n) for(int i = a; i < n ; i++)
const int MOD = 1e9+7, N = 1000000;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int left[n] = {0};
    int right[n] = {0};
    forn(i,0,n) {
        cin >> arr[i];
      
    }
    
    int pres[1000001] = {0};
    
    forn(i,0,n){
        pres[arr[i]]++;
        
        left[i] = pres[arr[i]];
        
    }
    
    int p[1000001] = {0};
    
    for(int i = n-1; i>= 0; i--){
        p[arr[i]]++;
        
        right[i] = p[arr[i]];
        
    }
    
    int sl , el , sr , er, chek = 0;
    
    bool flag = false;
    
    for(int i = 0 ; i< n  ; i++){
        if(left[i] > 1 ){
            chek++;
        
            sl = i;
            flag = true;
        
            break;
        }
      
    }
    
    
    for(int i = 0 ; i< n  ; i++){
        if(right[i] > 1){
            chek++;
            sr= i;
            break;
            
        }
        
        
        
    }
    

    
    for(int i = n-1; i>= 0 ; i--){
        if(left[i] > 1 ){
            chek++;
        
            el = i;
            break;
        }
        
      
    }

        
    for(int i = n-1; i>= 0 ; i--){
        if(right[i] > 1){
            chek++;
            er= i;
            break;
            
        }
        
 
        
        
    }
    
    int ans = 0 , tans ;
    
    ans = el - sl + 1;
    tans = er - sr +1;
    
    if(!flag)cout << 0;
    else if(ans < tans) cout << ans;
    else cout << tans;
    
    
    
    cout << endl;
    
    return 0;
}
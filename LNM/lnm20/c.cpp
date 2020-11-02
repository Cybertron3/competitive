#include<bits/stdc++.h>
using namespace std;

void solve(){

    int sh , sm , eh , em;

    cin >> sh >> sm >> eh >> em;

    int tester[4];

    bool found = false ;
    long long int ans = 0;

    while(!found){
        if(sh == eh && sm == em){
            found = true;
        }

        tester[0] = sh%10;
        tester[1] = sh/10;
        tester[2] = sm%10;
        tester[3] = sm/10;

        // for(int i  =0 ; i < 4 ; i++)cout << tester[i] << "\n";

        sort(tester , tester + 4);

        if(tester[3] == tester[0] + tester[1] + tester[2]){
            ans++;
            // cout << sh << ":" << sm << "\n";
        }

        sm++;

        if(sm == 60){
            sm = 0;
            sh++;
            if(sh == 24)sh = 0;
        }


    }


    
    
    cout << ans << "\n";
    
    
        


}

int main(){

    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       

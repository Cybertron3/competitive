//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     

void solve(){

    int n ; cin >> n;
    long long k;
    cin >> k;


    long long inp;
    std::vector<long long> v;

    for(int i =0 ; i < n; i++){
        cin >> inp;

        if(inp % k != 0){
            v.push_back( k - inp % k );
        }
    }

    sort(v.begin() , v.end());

    long long int ans = 0;
    // for(int i  = 0; i < v.size(); i++)cout << v[i] << "\n";

    int siz = v.size();

    for(int i  = 0 ; i < siz; i++){
        long long cnt = 0;
        i++;
        // cout << i << "\n";
        while(i < siz ){
            if(v[i] == v[i-1]){
                cnt++;
                i++;
            }else{
            
                break;
            }
        }
        i--;

        // cout << cnt << "\n";

        if(ans < v[i] + cnt*k){
            // cout << i << " " << v[i] << " "  <<  cnt << "\n";
            ans = v[i] + cnt*k;
        }
        // cout << ans << "\n";
    }
    
        
    if(ans != 0)cout << ans + 1<< "\n";
    else cout << "0\n";
}

int main(){
 
    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       

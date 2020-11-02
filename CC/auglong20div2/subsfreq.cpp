// For 10 points

#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solve();

int main(){

    int t; cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

void solve(){

    int n; cin >> n;

    int arr[n+1] , inp;
    memset(arr , 0 , sizeof(arr));
    long long ans[n+2];

    for(int i = 0; i< n; i++){
        cin >> inp;
        arr[inp]++;
    }

    long long temp = 1;
    long long prev = 1;

    for(int i = n; i >= 1; i--){
       // ans[i] = prev;
        temp = 1;
        // cout << "here";
        while(arr[i]--){
            temp = (temp*2)%mod;
            // cout << "still here";
        }

        
        ans[i] = (prev * (temp - 1))%mod;

        prev = (prev * temp)%mod;
      

        
    }

    for(int i = 1; i <= n ; i++){
        cout << ans[i] << " ";
    }
    cout << "\n";

}
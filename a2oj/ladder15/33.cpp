//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 
//AC
#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

ll X = 212072634227239451; 

void solve(){

    int n; cin >> n;
    
  
    int arr[n];
    ll sum = 0;
    for(int i = 0; i<n ; i++){
        cin >>arr[i];
        sum += arr[i];
    }

    sort(arr , arr + n);
    // ll ans = arr[n-1];

    


    // if(arr[0] == arr[n-1]){

    // }

    // ll ans =

    // ll ans;  

    // if(arr[0] == arr[1] && arr[0] == arr[2]){
    // 	ans = arr[0] + 1;
    // }else{
    // 	ans = arr[n-1];
    // 	arr[0] = max(0 , arr[0] - (arr[n-1] - arr[1]));

   	// 	ans = ans + arr[0];
    // }
    
    // cout << ans<< "\n";


    sum = (sum + (n-2)) / (n-1);

    if(sum < arr[n-1])sum = arr[n-1];

    cout << sum << "\n";


    

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       

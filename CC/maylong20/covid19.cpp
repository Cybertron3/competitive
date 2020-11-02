//PLUS ULTRA
//one who sits atop all the clan : Lion's Sin Escanor 

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

void solve(){

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
    	cin >> arr[i];
    }

    // sort(arr , arr+n);

    int ans[n];
    memset(ans , 0 , sizeof(ans));

    for(int i = 0; i < n ; i++){
    	for(int j = i+1; j < n ; j++){
    		if(arr[j] - arr[j-1] <= 2)ans[i]++;
    		else break;

    	}
    	for(int j = i-1; j>= 0; j--){
    		if(arr[j+1] - arr[j] <= 2 )ans[i]++;
    		else break;
    	}
    }


    sort(ans , ans+n);

    cout << ans[0] + 1 << " " << ans[n-1] + 1<< "\n";




}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       

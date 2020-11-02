//PLUS ULTRA
//one who atops 

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

	


    int n ; cin >> n;
    int arr[n];
    for(int i = 0; i<n ; i++){
    	cin >> arr[i];
    }

    //sort(v.begin() , b.end());

    int flag = arr[0];
    int cnt[1001];
    memset(cnt , 0  , sizeof(cnt));
    cnt[arr[0]]++;
    forn(i , 1 , n){
    	if(flag != arr[i]){
    		cnt[arr[i]]++;
    		flag  = arr[i];

    	}else{
    		flag = -1;
    	}

    }


    int max = 0;
    for(int i = 1 ; i < 1001 ; i++ ){
    	if(cnt[i] > cnt[max])max = i;
    }


    cout << max << endl;




    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       

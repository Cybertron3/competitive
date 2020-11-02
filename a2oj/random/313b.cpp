//PLUS ULTRA
//one who sits atop all the clans : Lion's Sin Escanor 

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

    string str; cin >> str;
    int n = str.size();

    int arr[n+1];
    memset(arr , 0 , sizeof(arr));

    forn(i,1,n){

    	arr[i] = arr[i-1];
    	if(str[i] == str[i-1])arr[i]++;

    }
    
	int q; cin >> q;
	int l , r;

	while(q--){
		cin >> l >> r;
		l--; r--;

		cout << arr[r] - arr[l] << "\n";
	}    
        


}

int main(){
    SPEED;

     solve();




    return 0;
}
      
       

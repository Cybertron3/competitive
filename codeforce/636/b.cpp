//PLUS ULTRA
//escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	int n ; cin >> n;

	int ev = 2 , od = 1;
	int ch = 1;


	if(n%4 != 0){
		cout << "NO" << endl;
		return;
	}

	cout << "YES" << endl;

	forn(i,0,n/2){
		if(ch == 1){
			cout << ev << " ";
			i = i+1;
			ev = ev+2;
			cout <<  ev << " ";
			ev+=2;
			ch = 2;
		}else{
			cout << ev << " ";
			i++;
			ev+=4;
			cout << ev << " ";
			ev+=2;
			ch = 1;

		}

	}

	ch = 1;


	forn(i,n/2,n){
		if(ch == 1){
			cout << od << " ";
			od+=4; i++;
			cout << od << " ";
			od+=2;
			ch = 2;
		}else{
			cout << od << " ";
			i++; od += 2;
			cout << od << " ";
			od+=2;
			ch = 1;
		}
	}

	
	cout << endl;
    



}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       

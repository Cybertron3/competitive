//PLUS ULTRA
//one who atops 

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
    
	string t; cin >> t;
	int n = t.size();

	int num = t[0] - '0';
	//num  = num;

	bool same = true;

	forn(i,0,n-1){
		if(t[i] != t[i+1]){
			same = false;
			break;
		}
	}

	if(same){
		cout << t;
	}else{
		cout << num ;
		//num = num ^ 1;
		forn(i,1,n){
			if(t[i] == t[i-1]){
				num = t[i] - '0';
				num = num ^1;
				cout << num << t[i];
			}else{
				cout << t[i];
			}
			
		}
	}

	cout << "\n";







}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       

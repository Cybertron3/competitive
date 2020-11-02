//PLUS ULTRA
//one who atops 

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
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

	int n; cin >> n;

	int pos[n+1]  , temp;

	forn(i,1,n+1){
		cin >> temp;
		pos[temp] = i;
	}

	int last = n ;
	int p ;
	bool flag = true;



	forn(i,1,n+1){

		if(pos[i] == last){
			last--;
			continue;
		}
		else{
			temp = pos[i] - 1;
			
			p = pos[i] + 1;
			i++;

		
			while(i <= n && p <= last){
				if(pos[i] == p){
					i++;
					p++;
				}else{
					// cout << pos[i] << " " << pos[i-1] << endl;
					// cout << "jsdfjawj" << "   " << i << endl;
					flag = false;
					break;
				}

			}

			if(!flag )break;

			last = temp;

		}


	}

	if(flag)cout << "YES" ;
	else cout << "NO";

	cout << endl;
    



}

int main(){
  //  SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       

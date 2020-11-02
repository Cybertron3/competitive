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

	int one =-1 , two = -1 , three = -1;
	int len = 0;

	forn(i,0,n){
		if(str[i] == '1')one = i;
		else if(str[i] == '2')two = i;
		else three = i;

		if(one != -1 && two != -1 && three != -1){
			int tmp = max(max(one , two) , three) - min(one , min(two , three)) + 1;
			if(len == 0 || len > tmp ){
				len  = tmp; 
			}

		}


	}

	cout << len <<"\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       

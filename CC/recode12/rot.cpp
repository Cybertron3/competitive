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


    int n , inp; cin >> n;
 //    std::vector<pii> v;
 //    set<int> SET;
 //    for(int i = 0; i<n ; i++){
 //    	cin >> inp;
 //    	if(SET.find(inp) == SET.end()){

 //    		v.pb({inp , i});
 //    		SET.insert



 //    	}
	// }
 //    int ans = 1;
 //    forn(i,1,n){
 //    	if(v[i].ss )

 //    }

    std::vector<pii> v;
    //int inp;

    forn(i, 0 , n){
    	cin >> inp;
    	v.pb({inp , i});
    }

    sort(v.begin() , v.end());

    int lst = -1 , ans = 1;

    forn(i,0,n){
    	// if(v[i].ss < lst){
    	// 	ans++;
    	// }
    	//int mini = v[i].ss;
    	//lst = v[i].ss ;
    	int j = i;
    	bool flag = false;
    	while( j < n && v[i].ff == v[j].ff){
    		if(!flag  && v[j].ss > lst){
    			lst = v[j].ss;
    			flag = true;
    		}
    		
    		j++;
    	}

    	j--;

    	if(!flag){
    		ans++;
    	//	cout << v[i].ff << endl;
    		lst = v[i].ss;
    	}



    	i = j ;

    }


    

	cout << ans << "\n";
    


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();




    return 0;
}
      
       

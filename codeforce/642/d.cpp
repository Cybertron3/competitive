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

    int n; cin >> n;
    int arr[n+1];
    

    std::vector<pii> v[n+1];

    
    v[n].pb({1,n});

    int l , r , mid;
    
   	int i = 0 , j = n , num = 1;

   	while(j > 0 ){

   		i = 0;
   		sort(v[j].begin() , v[j].end());

	    while(i <(int) v[j].size()){

	    	// cout << "size is " << v.size() << "\n";

	    	l = v[j][i].ff;
	    	r = v[j][i].ss;

	    	if(l > r){
	    		i++;
	    		continue;
	    	}

	    	
	    	if((r-l+1)%2 == 1){
	    		mid = (l+r)/2;

	    		v[mid-l].pb({l , mid-1});
				v[r-mid].pb({mid+1 , r});
	    		
		    }else{
		    	mid = (r + l - 1)/2;

		    	v[r - mid].pb({mid+1, r});
				v[mid - l].pb({l , mid-1});
		    	
				
		    }

		    arr[mid] = num++;

		    
		    


		    i++;

	    }


	    j--;
	}

    
    forn(i,1,n+1){
    	cout << arr[i] << " ";
    }

    cout << "\n";
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       

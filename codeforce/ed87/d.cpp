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

int binary(std::vector<int> arr , int x , int l , int r){

	if(r-l<= 1){
		if(arr[r] == x)return r;
		else return l;
	}
	 if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (arr[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (arr[mid] > x) 
            return binary(arr, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binary(arr, mid + 1, r, x); 
    } 
  
    // We reach here when element is not 
    // present in array 
    return -1; 
}

void solve(){
	int n , q;
	cin >> n >> q;
	std::vector<int> v(n);

	forn(i,0,n){
		cin >> v[i];
	}

	sort(v.begin() , v.end());

	int inp;

	while(q--){
		cin >> inp ;
		if(inp > 0){
			int x = binary(v , inp , 0 , (int)v.size()-1);
			v.insert(v.begin() + x , inp);
		} else{
			inp = -1 * inp;
			inp--;
			v.erase(v.begin() + inp);
		}
	}

	if(v.empty())cout << 0 << "\n";
	else cout << v[0] << "\n";

}

int main(){
    SPEED;

    int t = 1; 
    
    // cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       

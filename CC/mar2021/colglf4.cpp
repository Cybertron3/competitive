#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define ft front()
#define bk back()
#define pf push_front
#define pb push_back
#define eb emplace_back
#define lb lower_bound
#define ub upper_bound

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down


void solve() {

    ll  N , E ,H , a , b , c;
    cin >> N >> E >> H >> a >> b >> c;
    
    // int p[3];

    // if(a > max(b , c)){

    // 	p[0] = 1;
    // 	p[1] = 2;
    // 	p[2] = 3;
    // 	if(c  > b){
    // 		for(int q1 = 0; q1 < n; q1++){
    // 			if(q1 )
    // 		}

    // 		swap(p[1] , p[2]);
    // 	}
    // }else if(b > max(a , c)){
    // 	p[0] = 2;
    // 	p[1] = 1;
    // 	p[2] = 3;
    // 	if(c  > a){
    // 		swap(p[0] , p[2]);
    // 	}

    // }else{
    // 	p[2] = 1;
    // 	p[0] = 2;
    // 	p[1] = 3;
    // 	if(a < b){
    // 		swap(p[0] , p[1]);
    // 	}
    // }

    // for(int q1 = 0; q1 < n; q1++){
    // 	if(q1*2 > e)break;

    // }

    /*int ans = INT_MAX;

    if(a <= b && b <= c){
    	for(int q1 = min(n , e/2 ); q1 >= 0 ; q1-- ){
    		
    		for(int q2 = min(n-q1 , h/3); q2 >= 0 ; q2--  ){
    			int q3 = n - q2 - q1 ;

    			

    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }else if(a <= c && c <= b){
    	for(int q1 = min(n , e/2 ); q1 >= 0 ; q1-- ){
    		
    		for(int q3 = n-q1 ; q3 >= 0 ; q3--  ){
    			int q2 = n - q1 - q3 ;
    			
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }else if(b <= a && a <= c){
    	for(int q2 = min(n , h/3); q2 >= 0 ; q2--  ){
    		for(int q1 = min(n-q2 , e/2 ); q1 >= 0 ; q1-- ){

    			int q3 = n - q1 - q2 ;
    			
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }else if( b <= c && c <= a){
    	for(int q2 = min(n , h/3); q2 >= 0 ; q2--  ){
    		for(int q3 = n-q2 ; q3 >= 0 ; q3--  ){
    			int q1 = n - q2 - q3 ;
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";

    			
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }else if(c <= a && a <= b ){
    	for(int q3 = n ; q3 >= 0 ; q3--  ){
    		for(int q1 = min(n-q3 , e/2 ); q1 >= 0; q1-- ){
    			int q2 = n - q1 - q3 ;
    			
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }else{

    	// cout << "a <= b <= c\n";
    	for(int q3 = n ; q3 >= 0 ; q3--  ){
    		for(int q2 = min(n-q3 , h/3 ); q2 >= 0; q2-- ){
    			int q1 = n - q2 - q3 ;
    			
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				if(ans > q1*a + q2*b + q3*c ){
    					ans = q1*a + q2*b + q3*c ;
    				}
    				break;
    			}

    		}
    	}

    }
*/

    // cout << "-1\n";
/*
    if(a <= b && b <= c){
    	for(int q1 = n; q1 >= 0 ; q1-- ){
    		
    		for(int q2 = n - q1; q2 >= 0 ; q2--  ){

    			int q3 = n - q2 - q1 ;

    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}

    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}

    		}
    	}

    }else if(a <= c && c <= b){
    	for(int q1 = n; q1 >= 0 ; q1-- ){
    		
    		for(int q3 = n - q1; q3 >= 0 ; q3--  ){
    			int q2 = n - q1 - q3 ;
    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}

    		}
    	}

    }else if(b <= a && a <= c){
    	for(int q2 = n ; q2 >= 0 ; q2--  ){
    		for(int q1 = n - q2; q1 >= 0 ; q1-- ){

    			int q3 = n - q1 - q2 ;
    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}

    		}
    	}

    }else if( b <= c && c <= a){
    	for(int q2 =  n ; q2 >= 0 ; q2--  ){
    		for(int q3 = n - q2 ; q3 >= 0 ; q3--  ){
    			int q1 = n - q2 - q3 ;
    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}

    		}
    	}

    }else if(c <= a && a <= b ){
    	for(int q3 = n ; q3 >= 0 ; q3--  ){
    		for(int q1 = n-q3 ; q1 >= 0; q1-- ){
    			int q2 = n - q1 - q3 ;
    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}


    		}
    	}

    }else{

    	// cout << "a <= b <= c\n";
    	for(int q3 = n ; q3 >= 0 ; q3--  ){
    		for(int q2 = n-q3 ; q2 >= 0; q2-- ){
    			int q1 = n - q2 - q3 ;
    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}
    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				cout << q1*a + q2*b + q3*c << "\n";
    				return;
    			}


    		}
    	}

    }

    cout << "-1\n";*/

    ll q1 , q2 , n;

    ll ans = 1e15 , val;


    for(int q3 = 0; q3 <= min(E , min(H , N )) ; q3++){
    	q1 = (E- q3)/2;
    	q2 = (H - q3)/3;
    	n = N - q3;

    	if(q1+q2  < n){
    		continue;
    	}
    	
    	// cout << "sdfgsd   \n";
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";


    	if( a <= b ){
    		if(q1 >= n){
    			val = n*a + q3*c;
    			if(val < ans){
    				ans = val;
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";
    			}

    		}else{
    			q2 = n - q1;
    			val = q1*a + q2*b + q3*c;
    			if(val < ans){
    				ans = val;
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";
    				

    			}

    		}
    	}else{
    		if(q2 >= n){
    			val = n*b + q3*c;
    			if(val < ans){
    				ans = val;
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";
    				
    			}

    		}else{
    			q1 = n - q2;
    			val = q1*a + q2*b + q3*c;
    			if(val < ans){
    				ans = val;
    				// cout << q1 << " " << q2 <<" " << q3 << "\n";
    				
    			}

    		}

    	}

    }



    if(ans == 1e15) cout << "-1\n";
    else cout << ans << "\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}



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

int fast(int n , int e , int h , int a , int b , int c){

	if(a <= b && b <= c){
    	for(int q1 = n; q1 >= 0 ; q1-- ){
    		
    		for(int q2 = n - q1; q2 >= 0 ; q2--  ){
    			
    			int q3 = n - q2 - q1 ;

    			if(q1 < 0 || q2 < 0 || q3 < 0 ){
    				continue;
    			}

    			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
    				return q1*a + q2*b + q3*c ;
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
    				return q1*a + q2*b + q3*c ;
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
    				return q1*a + q2*b + q3*c ;
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
    				return q1*a + q2*b + q3*c ;
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
    				return q1*a + q2*b + q3*c ;
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
    				return q1*a + q2*b + q3*c ;
    			
    			}


    		}
    	}

    }

    return -1;

}

int slow(int n , int e ,int h ,int a , int b , int c){
	int ans = INT_MAX;
	int x = -1  , y = -1 , z = -1;
	for(int q1 = 0; q1 <= n ; q1++){
		for(int q2 = 0; q2 <= n; q2++){
			if(q1 + q2 > n)continue;
			int q3 = n - q1 -q2;

			if(2*q1 + q3 <= e && 3*q2 + q3 <= h){
				
				if(q1*a + q2*b + q3*c  < ans ){
					ans = q1*a + q2*b + q3*c ;
					x = q1;
					y = q2;
					z = q3;
				}

			
			}



		}
	}

	cout << x << y << z << "\n";

    if(ans == INT_MAX) return -1;
    else return ans;
}



int main() {
    // ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    srand(time(0));



    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

    int t = 0;
    // cin >> t;

    int n , e , h , a , b , c;

    // while (++t) {
    // 	n = rand() % 10 + 1;
    // 	e = rand() % 10 ;
    // 	h = rand() % 10 ;
    // 	a = rand() % 10 + 1;
    // 	b = rand() % 10 + 1;
    // 	c = rand() % 10 + 1;

    // 	if(slow(n , e, h , a , b , c) == fast(n , e, h , a , b , c)){
    // 		cout << t << " ";
    // 	}else{
    // 		cout << "RESULT NOT MATCHED\n";

    // 		printf("n = %d , e = %d , h = %d , a = %d , b = %d , c = %d \n", n , e , h , a , b , c);
    // 		printf("fast = %d , slow = %d\n", fast(n , e, h , a , b , c) , slow(n , e, h , a , b , c));
    // 		break;
    // 	}
        
    // }

    cout << slow(6 , 6 , 8 ,6 , 2 , 3) << "\n";


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}



// ye dp ka 14 hai kya
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

    int n ; cin >> n;
    string str; cin >> str;

    if(str[0] == '0' || str[n-1] == '0'){
    	cout << "NO\n";
    	return;
    }

    int cnt = 0;

    for(int i = 0; i < n ; i++){
    	if(str[i] == '0')cnt++;
    }

    if(cnt % 2 != 0){
    	cout << "NO\n";
    	return;	
    }

    std::vector<char> a(n) , b(n );
    
    int cnt0 = 0 , cnt1 = 0;

    for(int i = 0; i < n; i++){
    	if(str[i] == '0'){
    		if(cnt0 % 2){
    			a[i] = ')';
    			b[i] = '(';
    		}else{
    			a[i] = '(';
    			b[i] = ')';
    		}
    		cnt0++;
    	}else{
    		if(cnt1 < (n-cnt)/2){
    			a[i] = b[i] = '(';
    		}else{
    			a[i] = b[i] =  ')';
    		}
    		cnt1++;
    	}
    }

    // int cnta = 1 , cntb = 1;
    // std::vector<char> a (n), b(n);
    // a[0] = '(';
    // b[0] = '(';
    // a[n-1] = ')';
    // b[n-1] = ')';

    // for(int i = 1; i < n-1 ; i++){
    // 	if(str[i-1] == '0'){
    // 		if(str[i] == '1'){

    // 			if(cnta > 0 && cntb > 0 ){
    // 				if(str[i+1] == '0'){
    // 					if(cnta > 1 || cntb > 1){
    // 						a[i] = ')';
	   //  					b[i] = ')';
    // 					}else{
    // 						a[i] = '(';
	   //  					b[i] = '(';
    // 					}
    // 				}else{
	   //  				a[i] = ')';
	   //  				b[i] = ')';
    // 				}
    // 			}else{
    // 				a[i] = '(';
    // 				b[i] = '(';
    // 			}

    // 		}else{
    // 			if(a[i-1] == '('){
    // 				a[i] = ')';
    // 				b[i] = '(';
    // 			}else{
    // 				b[i] = ')';
    // 				a[i] = '(';
    // 			}
    // 		}
    // 	}else{
    // 		if(str[i] == '1'){
				// if(cnta > 0 && cntb > 0 ){
    // 				if(str[i+1] == '0'){
    // 					if(cnta > 1 || cntb > 1){
    // 						a[i] = ')';
	   //  					b[i] = ')';
    // 					}else{
    // 						a[i] = '(';
	   //  					b[i] = '(';
    // 					}
    // 				}else{
	   //  				a[i] = ')';
	   //  				b[i] = ')';
    // 				}
    // 			}else{
    // 				a[i] = '(';
    // 				b[i] = '(';
    // 			}   			

    // 		}else{
    			
				// if(cnta > cntb){
				// 	a[i]= ')';
				// 	b[i] = '(';
				// }else{
				// 	a[i] = '(';
				// 	b[i] = ')';
				// }


    			
    // 		}
    // 	}

    // 	if(a[i] == '(')cnta++;
    // 	else cnta--;

    // 	if(b[i] == '(')cntb++;
    // 	else cntb--;

    // }





  //   std::vector<char> b(n);
  //   int cnt = 0;

  //   for(int i = 0 ; i < n ; i++){
  //   	if(str[i] == '1'){
  //   		if(i % 2){
  //   			b[i] = ')';
  //   		}else{
  //   			b[i] = '(';
  //   		}
  //   	}else{
  //   		if(i % 2){
  //   			b[i] = '(';
  //   		}else{
  //   			b[i] = ')';
  //   		}

  //   	}
  //   	if(b[i] == ')')cnt--;
  //   	else cnt++;

  //   	if(cnt < 0){
  //   		cout << "NO\n";
  //   		return;
  //   	}

  //   }

    cout << "YES\n";

    for(int i = 0 ; i < n; i++){
    	cout << a[i] ;
    }


    cout << "\n";

    for(int i = 0 ; i < n; i++){
    	cout << b[i] ;
    }

    cout << "\n";


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



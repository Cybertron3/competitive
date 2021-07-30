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


// void solve() {

//     string str; cin >> str;

//     int n = str.size();

//     int zeros[n] , ones[n] , teleport[n];
//     memset(zeros , 0 , sizeof(zeros));
//     memset(ones , 0 , sizeof(ones));
//     memset(teleport , -1,  sizeof(teleport));

//     int last_zero = n , last_one = n;

//     for(int i = n-1; i >= 0; i--){
//     	if(i < n-1){
//     		ones[i] = ones[i+1]
//     		zeros[i] = zeros[i+1];
//     	}

//     	if(str[i] == '0'){
//     		zeros[i]++;

//     		teleport[i] = last_one;
//     		last_zero = i;
//     	}else{ 
//     		ones[i]++;
			
// 			teleport[i] = last_zero;
// 			last_one = i;

// 		}


//     }

//     for()

//     if(zeros[0] == 0){
//     	cout << "0\n";
//     	return;
//     }

//     if(ones[0] == 0){
//     	cout << "1\n";
//     	return;
//     }
    
//     int i = 0;
//     while(i < n && str[i] == '0' ){
//     	i++;
//     }

//     if(i == n){
//     	cout << "1\n";
//     	return;
//     }

//     int cnt = 0 , lst = i;

//     for( ; i < n ; i++){
//     	while(i < n && str[i] == '1' ){
//     		i++;
//     	}

//     	if(i != n)cnt++;

//     	while(i < n && str[i] == '0' ){
//     		i++;
//     	}

//     	if(i != n)cnt++;
//     	lst = i;

//     }

//     if(cnt % 2 == 0){
//     	int pairs = cnt / 2;

// 	    int len = pairs + 2;

// 	    std::vector<char> ans(len);

// 	    ans[0] = '1';
// 	    ans[len-1] = '0';

// 	    int next_ele = last_zero[0];

// 	    for(int i = 1; i < len; i+){
// 	    	if()
// 	    }

//     }

	    



// }


void solve(){
	string str; cin >> str;

	int n = str.size();

	int i = 0;
	while(i < n && str[i] == '0'){
		i++;
	}

	int cnt = 0;
	char ch ;
	for( ; i < n ; ){
		if(cnt < 2){
			cnt = 0;
		}
		ch = str[i];
		cnt = 0;
		while(i < n && str[i] == ch ){
			i++;
			cnt++;
		}




	}


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



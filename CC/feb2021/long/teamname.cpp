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
#define att auto
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

void solve(){
	
	int n; cin >> n;

	map<string , vector<int>  > mapping;
	char head;
	string post;

	for(int i = 0; i < n; i++){
		cin >> post;
		
		head = post[0] ;
		post.erase(post.begin() + 0);

		// if(stt[hea
		head -= 'a';
		if(mapping.find(post) != mapping.end()){
			mapping[post][head] = 1;
		}else{
			std::vector<int> vec(26 , 0);
			vec[head] = 1;
			mapping[post] = vec;
 		}

	}

	ll ans = 0 ;

	// 
	// }

	for(att i = mapping.begin() ; i != mapping.end() ; i++){
		// int *a = i->second ;
		// cout << "first " << ans << "\n";
		ll cnta = 0;
		for(int z = 0 ; z < 26 ; z++){
			if(i->ss[z] == 1)cnta++;
		}
	
		att j = i;
		while(++j != mapping.end() ){
			ll cmn = 0  , cntb = 0;
			for(int z = 0; z < 26 ; z++){
				if(j->ss[z] == 1 &&  i->ss[z] == 1)cmn++;
			}
			
			for(int z =0; z < 26 ; z++){
				if(j->ss[z] == 1)cntb++;
			}

			// cout << cnta << " " << cntb << " " << common << "\n";

			ans += (cnta - cmn) * (cntb - cmn);

		}
	}

	cout << ans*2 << "\n";


	// for(int i = 0 ; i < 26; i++){
	// 	cnt += stt[i].size();
	// }

	// cout << "subs = " << subs << "\n";

	// for(int i = 0; i < 26 ; i++){
	// 	ans +=  (stt[i].size() * (cnt - stt[i].size()));
	// 	cnt = cnt - stt[i].size();
	// }

	// ans -= subs;

	// cout << ans << "\n";
	
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



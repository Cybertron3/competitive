// //Lion's Sin Escanor 

// #include<bits/stdc++.h>
// using namespace std;
     
     
// //#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
// #define ll long long
// #define sd(x) scanf("%d",&x)
// #define sld(x) scanf("%lld",&x)
// #define pld(x) printf("%lld\n",x)
// #define pd(x) printf("%d\n",x)
// #define moder 1000000007
// #define forn(i,n) for(int i = 0; i < n ; i++)

// ll moding( ll x , ll y ){
   
//     ll ans = x % y;

//     if(ans < 0)ans = ans + y ;

//     return ans ;

// }


// bool isprime(ll n){
//     if(n==2) return true;
//     if(n==3) return true;
//     if(n%2 == 0) return false;
//     if(n%3 == 0) return false;

//     ll i = 5,w=2;

//     while(i*i <= n){
//         if(n%i == 0)return false;

//         i += w;
//         w = 6 - w;
//     }

//     return true;
// }




// int main(){

//     int t; sd(t);

//     while(t--){
//         int n; sd(n);
//         int arr[13] = {0};

//         int temp1 , temp2;

//         forn(i , n ){
//             sd(temp1); sd(temp2);

//             if(arr[temp1] < temp2) arr[temp1] = temp2; 

//         }
        
//         ll total = 0;

//         forn(i,9){
//             total += arr[i];
//         }

//         cout << total << endl;

//     }     
        
//     return 0;
// }
    

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

    



}

bool isSubsetSum( int sum){
        // code here

        int N ; cin >> N;
        int arr[N];
        for(int i = 0; i < N ; i++){
            cin >> arr[i];
        }
    
        
        sort(arr  , arr + N);
        
        vector<bool> pres(sum + 1 , false);
        pres[0] = true;
        
        for(int i = 1; i <= sum ; i++){
            for(int j = 0; j < N; j++){
                if(i - arr[j] < 0)break;
                if(pres[i-arr[j]]){
                    pres[i] = true;
                    break;
                }
            }
        }
        
      
        for(int i = 1; i <= sum; i++){
            cout << pres[i] << "\n";
        }
        
        
        // return pres[sum];
        
        
        
    }

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

        isSubsetSum(30);


    // int t = 1;
    // cin >> t;
    // while (t--) {
    //     solve();
    // }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}



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

    int n , c; cin >> n >> c;

    std::vector<int> arr(n , 1);

    for(int i = 0; i < n ; i++){
        arr[i] += i;
    }

    if(c < n- 1 || c > (n*(n+1))/2  - 1 ){
        cout << "IMPOSSIBLE\n";
        return;
    }



    c -= (n -1);
    int st = 0 , end = n-1;
    for(int i = 0; i < n-1 && c > 0 ; i++){
        if(i % 2 == 1){

            cout << st << " " << end << " " << c <<  "\n";

            if(c >= end - st ){
                for(int j = 0 ; j < (end + 1  - st )/2 ; j++){
                    swap(arr[st+j] , arr[end - j]);
                }
                c -= (end - st );
            }else{
                for(int j = 0 ; j < (c+1)/2 ;j++){
                    swap(arr[st+j] , arr[st + c - j ]);
                }

                c = 0;
            }

            st++;

        }else{

            if(c >=  end - st ){
                for(int j = 0 ; j < (end - st + 1 )/2 ; j++){
                    swap(arr[st + j] , arr[end - j]);
                }
                c -= (end - st)  ;
            }else{
                for(int j = 0 ; j < (c+1)/2 ;j++){
                    swap(arr[end - j] , arr[(end - c) + j ]);
                }

                c = 0;
            }

            end--;

        }
    }

    // for(int i = 0; i < n-1 && c > 0 ; i++){
    //     if(c > n - i - 1){
    //         int tmp = c - (n - 1 - i - 1);   // extra 1

    //         if(tmp >= n - i){
    //             for(int j = 0 ; j < (n - i )/2 ; j++){
    //                 swap(arr[i+j] , arr[n - 1 - j]);
    //             }
    //             c -= (n - i);
    //         }else{
    //             for(int j = 0 ; j < tmp/2 ;j++){
    //                 swap(arr[i+j] , arr[i + tmp - j - 1]);
    //             }

    //             c -= tmp;
    //         }

            
    //     }else if(c == n - i - 1){  // extra 1 
    //         c = 0;
    //         break;
    //     }else{
    //         cout << "IMPOSSIBLE\n";
    //         return;
    //     }
    // }

    // if(c > 0){
    //     cout << "IMPOSSIBLE\n";
    //     return;

    // }
 
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
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

    int  t = 1 , T; cin >> T;
    while(t <= T) {
    	cout << "Case #" << t << ": ";
    	solve();
    	t++;
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}



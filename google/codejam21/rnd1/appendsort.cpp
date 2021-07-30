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
    std::vector<string> arr(n);
    
    for(auto &a : arr){
        cin >> a;
    }
    
    int ans = 0;
    int lst = arr[0].size() , curr;

    for(int i = 1 ; i < n; i++){
        curr = arr[i].size();
        if(curr > lst){
            lst = curr;
            continue;
        }
        else if(curr == lst){
            int j = 0;
            while( j < curr &&  arr[i][j] == arr[i-1][j] ){
                j++;
            }
            if(j == lst || arr[i][j] < arr[i-1][j] ){
                arr[i] += '0';
                ans++;
            }



        }else{

            bool flag = false , nvr = false;

            int j = 0;

            while(j < curr){
                if(arr[i][j] > arr[i-1][j]){
                    flag = true;
                    break;
                }else if(arr[i][j] < arr[i-1][j] ){
                    nvr = true;
                    break;
                }

                j++;
            }

            if(nvr){
                int need = lst - curr;
                need++;
                ans += need;
            
                while(need--)arr[i]+= '0';

            }

            else if(flag){

                int need = lst - curr;
                ans += need;
            
                while(need--)arr[i]+= '0';
                

            }else{

                // cout << "here\n";

                j = lst - 1 ;

                flag = false;

                while(j >= curr ){
                    if(arr[i-1][j] != '9'){
                        flag = true;
                        break;
                    }
                    j--;
                }

                if(flag){
                    // cout << "here1\n";
                    int need = lst - curr;
                    ans += need;
                    
                    while(curr < lst){
                        if(curr == j){
                            char ch = arr[i-1][j];
                            ch++;
                            arr[i].push_back(ch);

                        }else if (curr < j ){
                            arr[i] += arr[i-1][curr];
                        }else {
                            arr[i] += '0';
                        }

                        curr++;

                    }

                }else{
                    // cout << "here2\n";
                    int need = lst - curr;
                    need++;
                    ans += need;
                    
                    while(need--){
                        arr[i]+= '0';
                    }

                }



            }

            lst = arr[i].size();
            // int need = lst - curr;
            // ans += need;
            // int j = 0;
            // while(j < lst){

            // }
            // while(need--)arr[i]+= '0';

            // curr = lst;

            // int j = 0;
            // while(j < curr && arr[i][j] == arr[i-1][j] ){
            //     j++;
            // }
            // if(j == lst || arr[i][j] < arr[i-1][j] ){
            //     arr[i] += '0';
            //     ans++;

            // }

            // lst = arr[i].size();


        }
    }

    // for(int i = 0 ; i < n ; i++){
    //     cout << arr[i] << "\n";
    // }

    cout << ans << "\n";

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



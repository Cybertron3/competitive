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

const int N = 2e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

// 2 1 -1

void solve() {

    string str; cin >> str;


    int pres[10];
    mem(pres , 0);

    int n = sz(str);
    FOR(i, 0, n) {
        pres[str[i] - '0']++;
        // cout << pres[str[i] - '0'] << " ";
    }

    if (str.size() == 1 ) {
        if (str[0] == '8') {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }

        return;
    }

    if (str.size() == 2) {
        if (stoi(str) % 8 == 0) {
            cout << "Yes\n";

        } else {
            char ch = str[0];
            str[0] = str[1];
            str[1] = ch;
            if (stoi(str) % 8 == 0) {
                cout << "Yes\n";

            } else {
                cout << "No\n";
            }
        }

        return;
    }


    FOR(i, 100, 1000) {
        if (i % 8 == 0) {
            // if (i == 432) cout << "HERE";
            int j  = i;
            std::vector<int> tmp(10 , 0);
            while (j > 0  ) {

                tmp[j % 10]++;
                j /= 10;
            }

            bool flag = true;
            FOR(k, 0, 10) {
                if (tmp[k] > pres[k]) {
                    flag = false;
                    // if (i == 432) {
                    //     cout << tmp[k] << " " << pres[k] << "\n";
                    //     cout << k << "\n";
                    // }
                    break;
                }
            }

            if (flag) {
                cout << "Yes\n";
                return;
            }

        }
    }

    cout << "No\n";



}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    // time_t start , end;

    // time(&start);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}



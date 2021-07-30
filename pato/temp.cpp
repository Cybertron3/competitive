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


int main() {
    

    // int arr[n][m]; 

    // int a[5];

  

    int a[5] = { 1 , 5 , 2  ,  3, -9};
    // a = {-9 , 1 , 2 , 3 , 5}

    // arr = { { , } , { , }  , {  5, } , { , } };

    sort(a , a+5);

    for(int i = 0; i < 5; i++){
    	cout <<a[i] << " "; 
    }

    sort(a , a+5 , greater<int>());
    cout <<"\n";

    for(int i = 0; i < 5; i++){
    	cout <<a[i] << " "; 
    }
 
 	// arr[2][0] => 5 

 	// # , #
 	// # , #
 	// 5 , #
 	// # , #

 	// arr[1][1];

 	// for(int i = 0; i < n; i++){
 	// 	for(int j = 0; j < m; j++){
 	// 		cout << arr[i][j] << " ";
 	// 	}
 	// }

 	// for(int j = 0; j < m ; j++){
 	// 	for(int i = 0; i < n; i++){
 	// 		cout << arr[i][j] << " ";
 	// 	}
 	// }

	// vector<int > vec(10 , 1000);
	// string inp;
	// // int arr[5];

	// vector<string> vec(10 , "a");




	// // cout << arr[0] << "\n";

	// for(int i = 0; i < 5; i++){
	// 	cin >> inp;
	// 	// arr[i] = inp;
	// 	// vec[i] = inp;
	// 	vec.push_back(inp);
	// }


	// // vector<int> vec;
	// // vec = v1 + v2 ;
	// int n = vec.size();



	// cout << "size of vector : " << n << "\n";

	// for(int i =0 ; i < n; i++){
	// 	cout << vec[i] << " ";
	// }

	// for(int i = 0; i < n; i++ ){
	// 	cout << vec[i] << "\n";
	// }

    return 0;
}



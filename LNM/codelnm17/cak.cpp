//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

#define f first
#define s second

int main(){
    SPEED;

    int n; cin >> n;

    int arr[n];

    forn(i,0,n)cin >> arr[i];

    int a, b ,c;
    cin >> a>> b >> c;



    std::vector<pii> A(n), B(n) , C(n);

    forn(i,0,n){
    	A[i].first =  a | arr[i];
    	A[i].second = i;
    }

    forn(i,0,n){
    	B[i].f = b | arr[i];
    	B[i].s = i;

    }

    forn(i,0,n){
    	C[i].f = c |arr[i];
    	C[i].s = i;
    }


    sort(A.begin() , A.end());
    sort(B.begin() , B.end());
    sort(C.begin() , C.end());

    int x , y,z;

    int as = n-1 , bs = n-1 , cs = n-1;

    forn(i,0,n){
    	x = A[i].s;
    	y = B[i].s;
    	z = C[i].s;
    	if(x !=  y && x != z && y!= z){
    		A[i].f = A[i].f + B[i].f + C[i].f;
    	}else A[i].f = -1;

    }

    sort(A.begin(), A.end());

    cout << A[n-1].f <<endl;

    
    return 0;
}
      
       

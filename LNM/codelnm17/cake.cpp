
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



int main(){
    SPEED;

    int n; cin >> n;

    int arr[n];
    forn(i,0,n)cin >> arr[i];

    int m1, m2, m3;

    m1 = 0 , m2 =1 , m3 = 2;

    forn(i,0,n){
    	if(arr[i] > arr[m1])m1 =i;
    	else if(arr[i] +  )
    }



    
    return 0;
}
      
       

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

    sort(arr , arr + n );

    ll min = 2000000001 ,  idx = n;

    forn(i,0,n){
    	if(arr[i] > 0){
    		idx = i;
    		break;
    	}
    }

    bool flag = false;
    int m1 = idx-1 , m2 = idx;

   
    if(idx >= 2 &&  arr[idx-1] == 0 && arr[idx-2] == 0)min = 0;

   	while( m1 >= 0){

   		m2 = idx;
   		while(m2 < n && (ll)arr[m1] + arr[m2] < 0){
   			
   			m2++;

   		}

   		if(m2 < n && (ll)arr[m1] + arr[m2] < min){
   			min  = (ll)arr[m1] + arr[m2];
   			flag = true;
   		}

   		m1--;


   	}

   	if(!flag) min = arr[idx] + arr[idx+1];


   

   	cout << min << endl;



    

    



    
    return 0;
}
      
       

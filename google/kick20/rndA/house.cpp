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

    int t; cin >> t;

    int T= 0;

    while(++T <= t){
    	
    	int n,b; cin >> n >> b;
    	int arr[n];
    	forn(i,0,n)cin >> arr[i];

    	sort(arr , arr+n);

    	ll sum = 0;
    	int flag = -1;
    	cout << "Case #" << T << ": ";

    	forn(i,0,n){
    		sum += arr[i];
    		

    		
    		if(sum == b){
    			flag = i+1;
    			break;
    		}else if(sum > b){
    			flag = i;
    			break;
    		}


    		
    	}

    	if(flag == -1)flag =n;

    	cout << flag << endl;

    }

    
    return 0;
}
      
       

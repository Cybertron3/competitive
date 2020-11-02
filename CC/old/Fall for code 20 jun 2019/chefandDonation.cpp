#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
    int t; sd(t);

    while(t--){
    	int n , k;
    	sd(n); sd(k);

    	int arr[n];

    	int i = 0;

    	for( int j = 0; j < n; j++)sd(arr[j]);

    	int  xorr = arr[0];

    	for( i = 1; i< k; i++){
    		xorr = xorr ^ arr[i] ;

    	}

    	int maxor = xorr;

    	for(int j = 0; i < n; i++  ){

    		xorr = xorr ^ arr[i] ^ arr[j] ;

    		if(maxor < xorr) maxor = xorr;

    		j++;
    	}

    	pd(maxor);

    		
    }       
     
     
        
    return 0;
}

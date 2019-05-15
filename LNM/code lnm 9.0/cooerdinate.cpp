#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int n , k;
	sd(n); sd(k);

	ll x[n] , y[n];

	int ans = 0;

	for(int i =0 ; i< n ; i++){
		sld(x[i]);
		sld(y[i]);
	}         
    
    int i , j ;
    ll xmaxless , ymaxless;

    
    //piche wale car ke lie x max;

    for( i = 0; i< n ; i++){
    	int count = 0;
    	
    	//ll xmax , ymax;
    	
    	ll tempx , tempy;
    	tempx = x[0];
    	tempy = y[0];
    
    	for( j = 0; j < n && count<= k ; j++){
    		if(x[i] > x[j] && y[i] > y[j]){
    			count++;
    			if(tempx > x[j]) tempx = x[j];
    			if(tempy > y[j]) tempy = y[j];

    		} 

    	}

    	if(count == k){
    		ans++;
    		if(ans == 2) break;
    		xmaxless = tempx;
    		ymaxless = tempy; 
    		

    	}

    } 

    ans = 0 ;

    for( i = 0; i< n ; i++){
   		int count = 0;
   		int check = 1;
    
    	for( j = 0; j < n && count<= k && check ==1 ; j++){
    		if(x[j] > xmaxless && y[j] > ymaxless){
    			if(x[i] > x[j] && y[i] > y[j])count++;
    		}else check = 0;
    	}

    	if(count == k && check == 1)ans++;

    } 
    



    pd(ans); 
     
        
    return 0;
}

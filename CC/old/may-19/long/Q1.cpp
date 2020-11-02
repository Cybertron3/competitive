#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define pb(x) push_back(x)
     
     
int main(){
	
    int t;
    sd(t);
    
    vector<int> arr;
    
    arr.pb(0); // for index 0
	arr.pb(1); // for index 1
    

    while(t--){
        int n  ;sd(n); 
		int i = arr.size() - 1;
		if(i < 0) i = 0;
	   	ll sum  = 0;	
		
		if(n <= i) {
			sum = arr[n];
		
		}else{
		     
        	sum  = arr[i] ;
        
        	while(++i <= n ){
            	sum = (sum + i  + (sum * i))%1000000007; 
            	arr.pb(sum);
			
        	}	
    	}       
		
		pld(sum%1000000007);    
	}
     
        
    return 0;
}
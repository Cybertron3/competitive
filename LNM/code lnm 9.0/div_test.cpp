#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
ll func(ll num , int c);     
     
int main(){
    int t; sd(t);

    while(t--){
    	ll n ,r;
    	sld(n); sld(r);


    	ll nfac , rfac , nrfac;

    	nfac = func(n, 3 );
    	rfac = func(r ,3  );
    	nrfac = func(n-r , 3 );

    	if(nfac > rfac + nrfac && ( func(n , 2) > func(r , 2) + func(n-r , 2))) printf("Yes\n");
    	else printf("No\n");


    }    
           
     
     
        
    return 0;
}


ll func(ll num,int c){
	ll ans = 0;
	while(num != 0){
		num /= c;
		ans += num;
	}

	return ans;
}
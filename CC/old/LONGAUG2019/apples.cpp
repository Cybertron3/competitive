#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%llu",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int t; sd(t);

	ll n, k;

	while(t--){
	//	ll n , k ;

		sld(n); sld(k);

		if(k > 1000000000) printf("YES\n");

		else if(n % (k*k)  == 0)printf("NO\n");
		else printf("YES\n");


	}
           
     
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%llu\n",x)
#define pd(x) printf("%d\n",x)


ll func(ll n);
ll slow(ll n);     

int main(){

	//int t ; sd(t);
	ll numb = 1;


	while(1){
		//int n; sd(n);

		
		printf("numb = "); 	pld(numb);
		
		if(func(numb) != slow(numb)){
			printf("fast = %lld ans slow = %lld\n",func(numb) , slow(numb) );
		
			break;

		}else printf("been there done that\n");

		numb++;
		
	}
           
     
     
        
    return 0;
}

ll func(ll n){
	if(n < 3)return 0;

	n = n -2;

	ll sum = 0;
	sum = ((n*(n+1)))*(2*n + 1);
	sum = sum / 6;
	return sum;
}

ll slow(ll n){
	ll ans = 0;

	while(n > 2){
		ans += n*n - 4*n + 4;
		n--;
	}

	return ans;
}
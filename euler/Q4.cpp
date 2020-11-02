#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

bool ispd(ll x);
     
int main(){



	ll ans = 0 , num;

	for(ll m = 999 ; m > 99 ; m--){
		for(ll n = 999 ; n > 99; n--){
			num = m * n;
			if(ispd(num) && num > ans){
				ans = num;
				
			}
		}

	}

	pld(ans);



           
     
     
        
    return 0;
}

bool ispd(ll x){

	std::vector<int> v;

	while(x!= 0){
		v.push_back(x%10);
		x = x / 10;
	}

	int n = v.size();

	for(int i = 0; i< n/2 ; i++){
		if(v[i] != v[n-1-i] )return false;
	}



	return true;

}

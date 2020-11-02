#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%llu",&x)
#define pld(x) printf("%llu\n",x)
#define pd(x) printf("%d\n",x)
     
ll chek(std::vector<ll> v , ll val , ll l);
     
int main(){

	int t; sd(t);

	while(t--){
		ll n ; sld(n);
		int q; sd(q);

		ll s = 0;

		vector<ll> delnum;



		while(q--){

			int type ;

			sd(type);

			if(type == 1){
				ll x; sld(x);

				x = x + s;

				delnum.push_back(x);



			}else{
				ll ans , l , r ;

				sld(l); sld(r);

				l = l + s; 
				r += s;

			//	int temp = delnum.size();
				sort(delnum.begin() , delnum.end() ) ;
				ans = chek( delnum , r , l );

				s = (s + ans ) % n ;

				pld(ans);


			}

		}

	


	}
           
     
     
        
    return 0;
}


ll chek(std::vector<ll> v , ll val , ll l){

	for(int i = v.size() - 1; i >= 0 && val >= l ; i--){
		if(v[i] == val)val--;
		else if(v[i] < val)return val ;
	}

	if(val >= l )return val;

	return 0;

}
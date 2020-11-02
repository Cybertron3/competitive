#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll unsigned long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%llu",&x)
#define pld(x) printf("%llu\n",x)
#define pd(x) printf("%d\n",x)
     
ll chek( int v[] , ll val , ll l);
     
int main(){

	int t; sd(t);

	while(t--){
		ll n ; sld(n);
		int q; sd(q);

		ll s = 0;

		int arr[n + 1];

		for(int i = 1; i<= n ; i++){
			arr[i] = i ;
		}



		while(q--){

			int type ;

			sd(type);

			if(type == 1){
				ll x; sld(x);

				x = x + s;

				arr[x] = 0;



			}else{
				ll ans , l , r ;

				sld(l); sld(r);

				l = l + s; 
				r += s;

			//	int temp = delnum.size();
				
				ans = chek( arr, r , l );

				s = (s + ans ) % n ;

				pld(ans);


			}

		}

	


	}
           
     
     
        
    return 0;
}


ll chek(int v[] , ll r , ll l){

	for(int i = r ; i >= l  ; i--){
		if(v[i] != 0 )return v[i];
		
	}
	return 0;

}
#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	ll n ,i,j ; sld(n);

	j = n-1;

	string s;

	cin >> s;

	bool find = false;

	ll ans = 0;

	for( i = 0; i< n; i++){
		if(s[i] == '|'){
			find = true;
			break;
		}
	}

	bool fslashfind = false;

	if(find == true){
		
		for( ; i< n ; i++){
			if(s[i] == 92){
				
				fslashfind = true;
				break;

			}	
		}
	}

	bool bfind = false;

	if(fslashfind == true){
		
		for( j= n-1 ; j> i ; j--){
			if(s[j] == '|'){
				bfind = true;
				break;
			}
		
		}
	
	}

	bool allfind = false;

	if(bfind == true){
		for(; j>i ;j--){
			if(s[j] == '/'){
				allfind = true;
				
				break;

			}
		}
	}

	ans = 0;

	for( i = i+1 ; i <j ; i++ ){
		if(s[i] == 'm')ans++;
	}


	if(allfind == true)pld(ans+4);
	else printf("-1\n"); 
    return 0;
}

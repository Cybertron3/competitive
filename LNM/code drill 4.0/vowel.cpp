#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

bool isvowel(int x){
	if(x == 97 || x == 101 || x== 105 || x==111 || x== 117)return true;

	return false;
}


     
     
int main(){

	SPEED;

	int t; cin >>t;

	while(t--){

		string s;

		cin >> s;

		int n = s.size();

		int ans = 0;
		int start , end;

		if(n >=3){

			for(int i = 0; i< n ; i++){
				if(isvowel(s[i])){

					start = i;
					break;

				}

			}

			for(int i = n-1 ; i>= 0 ; i--){
				if(isvowel(s[i])){
					end = i;
					break;
				}
			}

			ans = end - start - 1;
			if(ans < 0)ans = 0;

		}

		cout << ans << endl;
	}
           
     
     
        
    return 0;
}

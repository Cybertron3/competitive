#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int isvowel(char ch);
     
     
int main(){

	int t; sd(t);

	while(t--){
		int n; sd(n);

		string s; 
		cin >> s;

		int ans = 0; 

		for(int i = 0; i< n-1 ; i++){
			if(isvowel(s[i]) == 0  && isvowel(s[i+1]) == 1){
				ans++;
				i++;
			}
		}

		pd(ans);

	}
            
	          
     
     
        
    return 0;
}


int isvowel(char ch){
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
		return 1;
	}

	return 0;
}
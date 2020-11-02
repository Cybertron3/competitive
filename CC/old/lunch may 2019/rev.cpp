#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int t; sd(t);

	while(t--){
		string s;
		cin >> s;

		int n = s.size();

		for(int i = n-1 ; i > 0 ; i--){
			if(s[i] != '9'  ){
				if( s[i-1] != '0' ){
					s[i-1]--;
					s[i] = '9';
				}

				
				
			}
		}

		for(int i = 0; i < n ;i++)printf("%c",s[i]);

		printf("\n");


	}            
           
     
     
        
    return 0;
}

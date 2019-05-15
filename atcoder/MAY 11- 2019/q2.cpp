#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
  
    int R,G,B,N;
    sd(R); sd(G); sd(B); sd(N);

   	int ans= 0;

    for(int i = 0;i <= N/R ;i++){
    	for(int j = 0; j <= (N - i*R)/G; j++){
    		for(int k = 0; k<= (N - (i*R) -(j*G))/B ;k++){
    			if((i*R) + (j*G) + (k*B) == N) ans++;
    		}
    	}
    } 
     
     pd(ans);
        
    return 0;
}

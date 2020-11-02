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
		int r, c;
		sd(r); sd(c);



		//for input
		int arr[r][c];
		for(int i= 0; i< r ; i++){
			for(int j = 0; j < c; j++){
				sd(arr[i][j]);
			}
		}

		int ans = 0;

		for(int i= 0; i< r ; i++){
			for(int j = 0; j < c; j++){
				
				int adj = 0;
				if(i -1 >= 0 )adj++;
				if(i+1 < r)adj++;
				if(j-1 >= 0)adj++;
				if(j+1 < c)adj++;

				if(adj > arr[i][j]) ans++;
				else break;
			}
		}

		if(ans == r*c) printf("Stable\n");
		else printf("Unstable\n");


	}            
           
     
     
        
    return 0;
}

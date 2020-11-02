// Drinks choosing

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	int n , k; sd(n); sd(k);

	int drink[n];

	

	int ans = 0;

	for(int i =0; i<n;i++)sd(drink[i]);

	for(int i = 0; i< n; i++){

		int count = 1;
		if(drink[i] == 0)continue;
		for(int j = i+1; j< n ; j++){

			if(drink[i] == drink[j]){
				count++;
				drink[j ] = 0;
			}

		}

		if(count %2 == 0){
			drink[i] = 0; 
			ans += count;
		}else{
			ans += count - 1;
		}
		
	}


    
    int remain = 0;
    for(int i = 0; i<n; i++){
    	if( drink[i] != 0 )remain++;
    }

   
    int temp = (remain + 1)/2;

    ans += temp; 

    pd(ans);
     
     
        
    return 0;
}

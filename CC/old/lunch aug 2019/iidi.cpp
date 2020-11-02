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
		int arr[3] , c[3];

		int n = 3;

		for(int i = 0; i< 3 ; i++) sd(arr[i]);

		for(int i = 0; i<n ; i++)sd(c[i]);

		bool ans = true;

		for(int i = 0; i< n ;i++){
			for(int j = i+1; j<n ; j++){
				if(arr[i] < arr[j] && c[i] >= c[j]){
					ans = false;
				}else if(arr[i] == arr[j] && c[i] != c[j]){
					ans = false;

				}
			}
		}

		for(int i = n-1 ; i>= 0;i-- ){
			for(int j = i -1 ; j>= 0 ; j--){
					if(arr[i] < arr[j] && c[i] >= c[j]){
					ans = false;
				}else if(arr[i] == arr[j] && c[i] != c[j]){
					ans = false;

				}
			}
		}


		if(ans == false )printf("NOT FAIR\n");
		else printf("FAIR\n");


           
     }
     
        
    return 0;
}


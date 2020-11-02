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

		int arr[26]= {0};

		for(int i = 0; i< n; i++){
			arr[s[i] -97 ]++;
		}

		int odd = 0;

		for(int i = 0; i< 26; i++){
			if(arr[i] % 2== 1)odd++;
		}

		if(n%2 == 0 && odd == 2){
			printf("DPS\n");

		}else if(n%2 == 1  && (odd == 1 || odd == 3) )printf("DPS\n");
		else printf("!DPS\n");


	}           
     
     
        
    return 0;
}

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
		int n ; sd(n);

		string str;
		cin >> str;

		int found = n;

		for(int i = 0; i< n; i++){
			if(str[i] == '8'){
				found = i;
				break;
			}
		}

	

		if(n-found -1>= 10) printf("YES\n");
		else printf("NO\n");
	}       
           
     
     
        
    return 0;
}

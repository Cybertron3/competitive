#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	string s;

	cin >> s;

	int ocount = 0, xcount = 0;

	for(int i = 0; i < s.size() ; i++){
		if(s[i] == 'o')ocount++;
		else xcount++;

	}          

	if(ocount >= 8 || ocount + 15 - s.size() >= 8)printf("YES\n");
	else printf("NO\n");
     
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

bool fun( int x){
	if(x == 'H' || x == 'Q' || x == '9')
		return true;
	return false;
}
     
     
int main(){

	string s;
	cin >> s;

	int n = s.size();

	bool flag = false;

	for(int i = 0; i< n ;i++){
		flag = fun(s[i]);
		if(flag)break;
	}


	if(flag)printf("YES\n");
	else printf("NO\n");
     
     
    return 0;
}

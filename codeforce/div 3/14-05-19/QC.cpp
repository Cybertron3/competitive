#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){

	SPEED;

    int n; sd(n);

    string s;
    cin >> s;

    int ans = 0  , i =0;

    while(i < n-1){
    	if(s[i]==s[i+1]){
    		s.erase(s.begin() + i);
    		
    		n--;
    		ans++;    		

    	}else i = i+ 2;
    }

   

    if(n%2==1){
    	ans++;
		s.erase(s.begin() + n-1);
	}
    
    pd(ans);
    cout << s; 
        
    return 0;
}

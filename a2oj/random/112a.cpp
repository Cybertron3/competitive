#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define dracarys(x) printf("%d\n",x)

     
int main(){

	string s1 , s2;

	cin >> s1 >> s2 ;

	int n = s1.size();

	int  flag = 0;

	for(int i = 0; i< n ;i++){
		if(s1[i] >= 'a')s1[i] -=  ('a' - 'A' );
		if(s2[i] >= 'a')s2[i] -=  ('a' - 'A') ;

		if(s1[i] != s2[i]){
			
			if(s1[i] > s2[i])flag = 1;
			else flag = -1;

			break;
		}

	}

	dracarys(flag);        
     
     
        
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	string s1 , s2;

	cin >> s1;
	cin >> s2;

	int n = s1.size();



	for(int i = 0; i< n ; i++){
		if(s1[i] ==s2[i]) printf("0");
		else printf("1");

	} 

	printf("\n");


           
     
     
        
    return 0;
}

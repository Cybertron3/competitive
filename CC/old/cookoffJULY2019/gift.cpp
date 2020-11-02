#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

#define pqueue priority_queue<int,vector<int>,greater<int >> 
     
     
int main(){

	int t; sd(t);

	while(t--){
		string s; cin >> s;

		int siz = s.size();

		ll ans = 0;

		for(int i = 0; i< siz ;i++){

			int limit = sqrt(siz - i);
			limit++;

			ll cnt1 = 0 , cnt0 = 0;

			for(int j = i; cnt1  < limit && j < siz ; j++){
				if(s[j] == '1' )cnt1++;
				else cnt0++;

				if(cnt0 == cnt1 * cnt1 ){
					ans ++;

					//cout << " i = "<< i << "  j = " << j << endl;




				}



			}

		}

		pld(ans);


	}
           
     
     
        
    return 0;
}

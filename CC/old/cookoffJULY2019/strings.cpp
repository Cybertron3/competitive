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
		int n; sd(n);

		string s , r; cin >> s ;

		cin >> r;

		int count = 0;

		for(int i = 0; i< n ;i++){
			if(s[i] == '1')count++;
		}

	//	cout << count << endl;
		int rcount = 0;

		for(int i = 0; i< n ; i++){
			if(r[i] == '1')rcount++;
			if(rcount > count){
				break;
			}

		}

	//	cout << rcount << endl;

		if(count == rcount)
			printf("YES\n");
		else printf("NO\n");






	}
           
     
     
        
    return 0;
}

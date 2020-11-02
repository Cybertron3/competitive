#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


#define pqueue priority_queue<int,vector<int>,greater<int >> 


int anagram(string s1, string s2){

	int ret = 1;

	for(int i = 0; i< 10 ; i++){
		if(s1[i] == s2[i]){
			ret = 0;
			break;
		}
	}

return ret;

}

     
     
int main(){

	int n; sd(n);

	int arr[n] = {0};

	string str[n];

	for(int i = 0; i< n ; i++){
		cin >> str[i];
	}

	char ch ;

	for(int i = 0; i<n ;i++){
		ch = str[i];

		arr[i] += ch;
	}

	ll ans= 0;

	for(int i = 0; i< n ; i++){
		for(int j = i+1; j< n ;j++){
			if(arr[i] == arr[j]){
				ans += anagram(str[i] , str[j]);
			}
		}
	}
           
     
     pld(ans);
        
    return 0;
}



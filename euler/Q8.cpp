#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

ll func(string arr , int n , int i , int * it);
     
     
int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	string s = "" , str;

	for(int i = 0; i< 20; i++){
		cin >> str;

		s += str;
	}


	int n = 1000;

	n = s.size();

	cout << n << "\n";

	ll max = 0, num;

	


	for(int i = 0; i <= n - 13 ; i++ ){
		num = 1;
		for(int j  = 0; j< 13 ; j++){
			num *= (s[i+j] - '0');
		}


		if(num > max) max = num;

		
	}

	pld(max);

   
        
    return 0;
}

ll func(string arr , int n , int i , int * it){
	ll num = 1;
	for( int count = 0; count < 13 ; count++ ){
		if( arr[i+count]  == 48  ){
			i = i + count + 1;
			count = 0;


		} 
	}

	*it = i + 13;

	ll sum = 0;

	for( int count = 0; count < 13; count++ ){
		sum += (arr[i] - 48);
	}

	return sum;
}

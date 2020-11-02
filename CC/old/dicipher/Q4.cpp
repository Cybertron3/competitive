#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)


     
     
int main(){

	string str; cin >> str;

	string key; cin >> key;

	int kbit[128];

	for(int i = 1 ; i<= 16; i++){

		int idx = i*8 - 1;
		int temp = str[i];

		for(int j = 0; j < 8; j++  ){
			kbit[idx - j] = temp % 2;
			temp /= 2;
		}
	}

	int start = 0;

	int d = 0 , p =1;

	for(int i = 5; i >= 0 ; i--){
		d += kbit[i]*p;
		p *= 2; 
	}

	start += d;

	start = start % 126;

	







           
     
     
        
    return 0;
}

int hexa(int ch){

	if(ch >= 48 && ch <=57)return ch - 48;

	else return ch - 97;

}

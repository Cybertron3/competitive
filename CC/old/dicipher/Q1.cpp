#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)

int modInverse(int a, int m) 
{ 
    int m0 = m; 
    int y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        int q = a / m; 
        int t = m; 
  
        // m is remainder now, process same as 
        // Euclid's algo 
        m = a % m, a = t; 
        t = y; 
  
        // Update y and x 
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
} 

     
int main(){


	//SPEED;

	string s; cin >> s;

	ll k1 , k2;

	cin >> k1 ;
	cin >> k2;

	ll n = s.size();

	k2 = modInverse(k2 , 26);


	for(int i = 0; i<n ; i++){
		int ch = (int)s[i];
		ch = ch % 65;
		ch =  (ch - k1);


		ch = ch * k2;


		ch = ch % 26;

		if(ch < 0)ch += 26;


		
		s[i] = ch + 65;

		

		

	}


	cout << s  << endl;
  
    return 0;
}



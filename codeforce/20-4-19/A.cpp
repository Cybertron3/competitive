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

    string s;

    cin >> s;
    int n = s.size() , ginti = 0;

    for(int i = 0; i < n ;i++){
        if(s[i]=='a') ginti++ ;


    }

    if(n < 2*ginti)pd(n);
    else{
        while(n != 0 && n >= 2*ginti){
            n--;
        }

        pd(n);
    }

     
     
        
    return 0;
}
   #include<bits/stdc++.h>
    using namespace std;
     
     
    #define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
    #define ll long long
    #define sd(x) scanf("%d",&x)
    #define sld(x) scanf("%lld",&x)
    #define pld(x) printf("%lld\n",x)
    #define pd(x) printf("%d\n",x)
     
     
int main(){
            
    
    int t;
    sd(t);

    while(t--){
        int n; sd(n);
        
        ll sum = n, ans = ((n*(n+1))/2)%1000000007;
        

        while(--n){
            sum =  (sum + n + sum * n)%1000000007; 
        }

        pld(sum%1000000007);

    }           
     
     
        
    return 0;
}
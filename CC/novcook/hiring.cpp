#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b); 
     
}

int main() {
    
    int t; cin >> t;

    while(t--){
        long long k  , x; 
        cin >> k >> x;

     
        
        long long ans = k -1 + x;

        for(long long i = 2; i <= x  ; i++ ){
            if(x % i == 0){
                
                if( gcd(i , x/i)  == 1 && ans > (k-2) + i + (x/i)  ){
                    ans = (k-2) + i + (x/i);
                    cout << i << "\n";
                }
            }
        }

        cout << ans << '\n';
       




    }


    return 0;
}



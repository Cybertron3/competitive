//PLUS ULTRA
 
#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
 
typedef long long ll;
typedef pair <int , int> pii;
 
const int N = 1e5 + 10 , mod =  1000000007;
 
 
 
int main(){
    SPEED;
 
    int x , y , a , b , c;
 
    cin >> x >> y >> a >> b >> c;
 
    int p[a] , q[b] , r[c];
 
    forn(i,0,a)cin >> p[i];
    forn(i,0,b)cin >> q[i];
    forn(i,0,c)cin >> r[i];
 
    sort(p , p+a);
    sort(q , q+b);
    sort(r , r+c);
 
    ll ans = 0;
 
    int pdx = a-1 , rdx = c-1 , qdx = b-1 , z = 0;
 
    while(pdx >= 0 && qdx >= 0 && rdx >= 0 && x > 0 && y > 0 && x + y - z>0){
        if(  p[pdx] > max(q[qdx] , r[rdx]) ){
            ans += p[pdx];
            x--;
            pdx--;
        }else if(p[pdx] == max(q[qdx] , r[rdx])){
            if(p[pdx] > r[rdx]){
                ans += p[pdx] ;
                pdx--; x--;
                if(  x + y - z > 0){
                    ans += q[qdx]; qdx--; y--;
 
                }

            }else{
                ans += p[pdx]; x--; pdx--;
                if(q[qdx] == r[rdx] && x + y - z > 0){
                    ans += q[qdx]; qdx--; y--;
 
                }
                if(x + y - z > 0){
                    ans += r[rdx]; rdx--; z++;
                }
 
            }
 
 
        }else{
            if(q[qdx] < r[rdx]){
                ans += r[rdx];
                z++;
                rdx--;
            }else {
                ans += q[qdx];
                qdx--;
                y--;
            }
        }
    }
 
 
    while(pdx >= 0 && x > 0 && x + y - z > 0){
        if(rdx >= 0 && p[pdx] < r[rdx] ){
            ans += r[rdx]; rdx--;
            x--;
        }else{
            ans += p[pdx]; x--;pdx--;
        }
    }
 
    while(qdx >= 0 && y > 0 && x + y - z > 0){
        if(rdx >= 0 && q[qdx] < r[rdx] ){
            ans += r[rdx]; rdx--;
            y--;
        }else{
            ans += q[qdx]; y--;qdx--;
        }
    }
 
    while(x+y-z > 0&& rdx >= 0){
        ans += r[rdx];
        rdx--; z++;
 
    }
 
        
 
    cout << ans << endl;
 
    
    return 0;
}
      
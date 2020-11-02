//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
/*
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
*/
#define moder 1000000007
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define pb push_back 
#define mp make_pair


ll moding( ll x , ll y ){
    ll ans = x % y;
    if(ans < 0)ans = ans + y ;
    return ans ;
}


bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;
        i += w;
        w = 6 - w;
    }
    return true;
}

ll cmp(string s1 , string s2){
    // 1 for diff , 0 for same 
    int n = s1.size();
    int m = s2.size();
    if(n!=m)return 1;
    for(int i = 0 ; i < n ; i++)
        if(s1[i] != s2[i])return 1;
    return 0; // SAME
}

ll hcf(ll n1, ll n2) {
    if (n2 != 0)
        return hcf(n2, n1 % n2);
    else
        return n1;
}


int main(){

    SPEED;

    int t; cin >> t;

    ll ans = 0;
    

    while(t--){
        int n; cin >> n;
        int tim;
        char film;
        ll arr[4][4];

        memset(arr , 0 , 16*sizeof(arr[0][0]));

        forn(i,0,n){
            cin >> film;
            cin >> tim;

            if(tim == 12)tim = 0;
            else if(tim == 3)tim = 1;
            else if(tim == 6)tim = 2;
            else tim = 3;

            arr[film-'A'][tim] += 1; 

        }

        /*

        forn(i,0,4){
            forn(j,0,4){
                cout << arr[i][j] << " ";
            }

            cout << endl;
        }

        cout << endl;

        */


        ll sum = 0 , emp , max = -400;


        forn(i,0,4){
            
            forn(j,0,4){
                if(j==i)continue;   
            

                forn(k,0,4){
                    if(k==j || k == i)continue;
                    
                    emp = 0;
                    if(arr[0][i] == 0 )emp++;
                    if(arr[1][j] == 0 )emp++;
                    if(arr[2][k] == 0 )emp++;
                    if(arr[3][6-i-j-k] == 0)emp++;

                    ll v[] = { arr[0][i] , arr[1][j] , arr[2][k] , arr[3][6-i-j-k] };

                    
                    sum = -100 * emp;

                   // cout << i << " " << j << " " << k << " " << 6-i-j-k << endl;

                    sort(v , v + 4);

                    ll pr = 25;
                    forn(l,0,4){
                        sum += (v[l] * pr );
                        
                        pr += 25;
                    }
                    
                  //  cout << endl;
                  

                    if(sum > max )max = sum;
                                        
                    
                }
            } 
           
        }

        cout << max << endl;
     //   cout << endl;

        ans+= max;
       




    }

    cout << ans << endl;

           
     
     
        
    return 0;
}


      
       
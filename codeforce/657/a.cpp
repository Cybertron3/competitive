//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

bool check(string str , int n){
    int cnt = 0;

    forn(i,0,n-6){
        if(str[i] == 'a' ){
            if(str[i+1] == 'b' ){
                if(str[i+2] == 'a' ){
                    if(str[i+3] == 'c' ){
                        if(str[i+4] =='a' ){
                            if(str[i+5] == 'b' ){
                                if(str[i+6] == 'a' ){
                                    cnt++;
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(cnt == 1){
        return true;

    }
    return false;
}

void solve(){

    int n; cin >> n;
    string str; cin >> str;

    bool fnd = false;

    forn(i,0,n-6){
        string S = str;
        if(str[i] == 'a' || str[i] == '?'){
            if(str[i+1] == 'b' || str[i+1] == '?'){
                if(str[i+2] == 'a' || str[i+2] == '?'){
                    if(str[i+3] == 'c' || str[i+3] == '?'){
                        if(str[i+4] =='a' || str[i+4] == '?'){
                            if(str[i+5] == 'b' || str[i+5] == '?'){
                                if(str[i+6] == 'a' || str[i+6] == '?'){
                                    
                                    S[i] = 'a';
                                    S[i+1] = 'b';
                                    S[i+2] = 'a';
                                    S[i+3] = 'c';
                                    S[i+4] = 'a';
                                    S[i+5] = 'b';
                                    S[i+6] = 'a';

                                    fnd = check(S , n);

                                    // fnd = true
                                    if(fnd){
                                        cout << "YES\n";
                                        forn(i,0,n){
                                            if(S[i] == '?'){
                                                S[i] = 'z';
                                            }
                                        }
                                        cout << S << "\n";
                                        return ;

                                    }
                                    // break;
                                }
                            }
                        }
                    }
                }
            }
        }

    }

    cout << "No\n";


    
    

    
    
        


}

int main(){
    Fast_as_duck;

    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       

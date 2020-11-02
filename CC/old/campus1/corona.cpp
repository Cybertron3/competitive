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

    int t; cin >> t;

    while(t--){
    	int n , d; cin >> n; 
        string str; cin >> str;

        cin >> d;

        int day[d];

        forn(i,0,d){
            cin >> day[i];
        }

        bool mask[n];
        memset(mask , false , sizeof(mask));

        
        

        vector<int> curr , nxt;

        forn(i,0,n){
            if(str[i]=='1')curr.pb(i);
        }

        int idx ;
        

        forn(i,0,d){
            

            mask[day[i]-1] = true;
            // if(str[0] == '1' && !mask[1] ) {
            //     str[1] = '1';
            //     flag = 1;
            // }

            forn(j,0,curr.size()){
                idx = curr[j];

                if(idx == 0){
                    if(!mask[1] && str[1] == '0'){
                        str[1] = '1';
                    
                        nxt.pb(1);
                    }
                }
                else if(idx == n-1){
                    if(!mask[n-1] && str[n-2] == '0'){
                        str[n-2] =  '1';
                        nxt.pb(n-2);
                    }
                }else{
                    if(!mask[idx] && str[idx-1] == '0'){
                        str[idx-1] = '1';
                        nxt.pb(idx-1);
                    }
                    if(!mask[idx+1] && str[idx+1] == '0') {
                    
                        str[idx+1] = '1'; 
                        nxt.pb(idx+1);
                    }

                }
                


            
            }

            curr = nxt;
            nxt.clear();

            // if(flag < n-1 && str[n-1] == '1' && !mask[n-1] ) {
            //     str[n-2] = '1';
            // }

            //cout << str << endl;

        }


        int cnt = 0;

        forn(i,0,n){
            if(str[i] == '1')cnt++;
        }

        cout << cnt << endl;

    }
    

    
    return 0;
}
      
       

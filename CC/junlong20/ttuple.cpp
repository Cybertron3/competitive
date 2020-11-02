//PLUS ULTRA


#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

int two(int a, int b , int c, int d){
    if(b-a == d - c){
        return 1;
    }else if(a!= 0 &&  c!= 0 && b % a == 0 && d % c == 0 && b/a = d/c ){
        return 1;
    }

    return 2;
}

void solve(){

    int a[3] , b[3];

    cin >> a[0] >> a[1] >> a[2];
    cin >> b[0] >> b[1] >> b[2];

    int chng = 0;
    std::vector<int> v;
    forn(i,0,3){
        if(a[i] != b[i]){
            v.pb(i);
            chng++;
        }
    }

    if(chng <= 1){
        cout << chng << "\n";
    }else if(chng == 2){

        cout << two(a[v[0]] , b[v[0]] , a[v[1]] , b[v[1]]) << "\n" ;

    }else{

        // ans == 1

        int diff = b[0] - a[0];
        if(diff == b[1] - a[1] && diff == b[2] - a[2]){
            cout << "1\n";
        }else if(a[0] != 0 && a[1] != 0 && a[2] != 0 && b[0] % a[0] == 0 && b[1] % a[1] == 0 && b[2] % a[2] == 0 && b[0]/a[0] == b[1]/a[1] && b[1]/a[1] == b[2]/a[2]){
            cout << "1\n";

        }

        // ans == 2

            /*
                chng one by adding and other two by two();
                else {
                    adding x to all element and then multiply
                } 

            */



        // ans == 3

        else cout << "3\n";

    }
    

    
    
        


}

int main(){
    SPEED;

/*
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       

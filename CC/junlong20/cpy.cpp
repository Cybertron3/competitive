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

bool fun(std::vector<int> a  , std::vector<int> b , int x , int y){
    if(a[x] != 0 && a[y] != 0 && b[x] % a[x] == 0 && b[y] % a[y] == 0 && b[x] / a[x] == b[y] / a[y] ){
            return true;

    }else if(b[x] - a[x] == b[y] - a[y]){
            return true;


    }

    return false;

}

int problemSolver(int a[] , int b[]);
int fortwo(int a[] , int b[] , int x);

void solve(){

    /*
        test case: (0 0 1 ) ==> (7 3 18)


    */

    int tmp = 3;


    int a[3]  , b[3];
    forn(i,0,3)cin >> a[i];
    forn(i,0,3)cin >> b[i];
    
    int a2[3] ;
    
    int ans = problemSolver(a , b);
    tmp = ans ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);
    
    a2[0] = a[0];
    a2[1] = a[2];
    a2[2] = a[1];

    
    tmp =   problemSolver(a2 , b) ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);  

    a2[0] = a[1];
    a2[1] = a[0];
    a2[2] = a[2];
    
    tmp =   problemSolver(a2 , b) ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);  
    
    a2[0] = a[1];
    a2[1] = a[2];
    a2[2] = a[0]; 
    
    tmp =   problemSolver(a2 , b) ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);  
    
    a2[0] = a[2];
    a2[1] = a[0];
    a2[2] = a[1];
    
    tmp =   problemSolver(a2 , b) ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);  
    
    a2[0] = a[2];
    a2[1] = a[1];
    a2[2] = a[0];
    
    tmp =   problemSolver(a2 , b) ;
    if(tmp == 3){
        tmp = fortwo(a2 , b , 0);
        if(tmp == 3){
            tmp = fortwo(a2, b , 1);
            if(tmp == 3){
                tmp = fortwo(a2 , b , 1);
            }
        }

    }
    ans = min(ans , tmp);  
    
    cout << ans << "\n";
    
}

int problemSolver(int a[] , int b[]){

    // int a[3] , b[3];
    // forn(i,0,3)cin >> a[i];
    // forn(i,0,3)cin >> b[i];

    int chng = 0;
    std::vector<int> initial , final ;
    forn(i,0,3){
        if(a[i] != b[i]){
            chng++;
            initial.pb(a[i]);
            final.pb(b[i]);
        }
    }

    if(chng < 2){
        // cout << chng << "\n"; 
        return chng;
    }else if(chng == 2){
        // if(initial[0] % a[0] == 0 && b[1] % a[1] == 0 && b[0] / a[0] == b[1] / a[1] ){
        //     cout << "1\n"; 

        // }else if(b[0] - a[0] == b[1] - a[0]){
        //     cout << "1\n";


        // }else{
        //     cout << "2\n";
        // }

        if(fun(initial , final , 0 , 1)){
            // cout << "1" << "\n";
            return 1;


        }else if(b[0] - a[0] == b[1] - a[1]){
            // cout << "1\n";
            return 1;


        }else return 2;
        // cout << "2\n";



        
    }else{

        bool flag = true;

        forn(i,0,3){
            if(a[i] == 0 || b[i] % a[i] != 0 ){
                flag = false;
            }
        }

        if(flag && (b[0] / a[0] == b[1] / a[1]) && (b[0] / a[0] == b[2]/a[2])){
            // cout << "1\n";
            return 1;
        }else if(b[0] - a[0] == b[1] - a[1] && b[2] - a[2] == b[1] - a[1]){
            // cout << "1\n";
            return 1;
        }else {
            flag = false;
            flag = flag || fun(initial , final , 0 , 1);
            flag = flag || fun(initial , final , 0 , 2);
            flag = flag || fun(initial , final , 1 , 2);

            if(flag ){
                // cout << "2\n";
                return 2;
            }else{
                // cout << "3\n";

                
                return 3;
            }

        }

    }
    
}


int fortwo(int a[] , int b[] , int x){

    int ax[3];
    int mini = 3;
    if(a[x] != 0 && b[x] % a[x] == 0){
        
        ax[x] = b[x];
        ax[0] = a[0] *(b[x] / a[x]);
        ax[1] = a[1] *(b[x] / a[x]);
        ax[2] = a[2] *(b[x] / a[x]);
        mini = 1 +  problemSolver(ax , b) ;                 
    }
    
    ax[0] = a[0] + b[x] - a[x];
    ax[1] = a[1] + b[x] - a[x];
    ax[2] = a[2] + b[x] - a[x];

    mini = min(mini  ,  1 + problemSolver(ax , b));

    return  mini;

}

int main(){
    SPEED;


    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
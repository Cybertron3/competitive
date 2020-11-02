//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<stdio.h>
#include<string.h>


#define forn(i,st,n) for(int i = st; i < n ; i++)


void solve(){

    int n , m; 
    // cin >> n >> m;
    scanf("%d%d",&n,&m);

    char str[n][m];

    forn(i,0,n){
        scanf("%s",str[i]);
    }

    // cout << "OK";
    // puts("OK");

    int pt[n+1][m+1];
    memset(pt , 0 , sizeof(pt));

    int q; 
    // cin >> q;
    scanf("%d",&q);

    int a , b , x , y;

    while(q--){
        // cin >> a >> b >> x >> y;
        scanf("%d%d%d%d",&a,&b,&x,&y);
        a--;b--;x--;y--;

        pt[a][b]++;
        pt[x+1][b]--;
        pt[a][y+1]--;
        pt[x+1][y+1]++;

        // forn(i,a,x+1){
        //     pt[i][b]++;
        // }

        // forn(i,a,x+1){
        //     pt[i][y+1]--;
        // }


    }

    forn(j,0,m+1){
        forn(i,1,n+1){
            pt[i][j] = pt[i][j] + pt[i-1][j];
        }
    }

    // forn(i,0,n+1){
    //     forn(j,0,m+1){
    //         // cout << pt[i] << " ";
    //         printf("%d ", pt[i][j]);
    //     }
    //     printf("\n");

    // }
    
    forn(i,0,n+1){
        forn(j,1,m+1){
            pt[i][j] = pt[i][j] + pt[i][j-1];
        }
    }

    

    int ch;

    forn(i,0,n){
        forn(j,0,m){
            if(pt[i][j]%2 ){
                ch = str[i][j] - '0';
                ch = (ch+1)%2;
                str[i][j] = (ch + '0');

            }

            printf("%c",str[i][j] );

            // cout << str[i][j] ;
        }
        printf("\n");
        // puts(str[i]);
    }



    
    

    
    
        


}

int main(){
  

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/
    int t = 1; 
    
    // cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       

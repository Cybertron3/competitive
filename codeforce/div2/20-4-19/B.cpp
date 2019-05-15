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

        int ginti = 0,n = s.size();

        for(int i = 0 ; i < n ; i++){
            if(s[i]=='a')ginti++;
        }

        int x , b=0;

        x = n - ginti;
        x = x /2;

        int j = x + ginti;
        if(j + x != n) b = 1;
        else{
            for(int i = 0 ; i< x+ ginti ; i++){
                if(s[i]!='a'){
                    if(s[i] != s[j]){
                        b= 1;
                        break;
                    }else j++;
                }
            }

        }

        
        if(b==0) for(int i = 0; i< x + ginti ; i++)    printf("%c",s[i]);
        else printf(":("); 
     
     
        
        return 0;
    }
    #include <iostream>
    using namespace std;
     
    int main() {
        int n,m,max=0,c,x;
        cin >> n;
        cin >> m;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
            c=0;
            while(a[i]!=0){
                if(a[i]<=m){
                    c++;
                    break;
                }
                else{
                    a[i]=a[i]-m;
                    c++;
                }
                
            }
            if(c>=max){
                max=c;
                x=i;
            }
            
        }
        cout << x+1;
        return 0;
    }
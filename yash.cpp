        #include <iostream>
        #include <cmath> 
        #include <iomanip> 
     
     
     
        using namespace std;
        void isPrime(long long int n) {
           long long int i, flag = 0;
           for(i=2; i<=n/2; ++i) {
              if(n%i==0) {
                 flag=1;
                 break;
              }
           }
           if (flag==0)
              cout<<"YES\n";
           else
              cout<<"NO\n";
        }
         
         int main(){
            long long int n,c=0,x,temp;
            cin >> n;
            long long int a[n];
            for(long long int i=0;i<n;i++){
                cin >> a[i];
            }
            for(long long int i=0;i<n;i++){
                x=a[i];
                temp=sqrt(x);
                if(temp*temp==x) a[i]=temp;
                else a[i]=0;
                
            }
            for(long long int i=0;i<n;i++){
                if(a[i]==0) cout<<"NO\n";
                else if(a[i]==1) cout<<"NO\n";
                else{
                    isPrime(a[i]);
                }
            }
        	return 0;
        }
#include<bits/stdc++.h>
using namespace std;
     

void solve(){

    int n; cin >> n;
    int arr[n];
    for(int i = 0; i< n ; i++){
        cin >> arr[i];
        
    }

    int zer = 0;
    for(int i  = 0; i < n; i++){
        if(arr[i] == 0){
            zer++;
        }
    }

    

    if(zer >= n/2){
        cout << n/2 << "\n";
        for(int i = 0; i< n/2; i++){
            cout << "0 ";
        }

    }else{

        if((n/2)%2){
            cout << (n/2) + 1 << "\n";
        }else{
            cout << n/2 << "\n";
        }

        for(int i= 0; i < n/2 ; i++){
            cout << "1 ";
        }

        if((n/2)%2){
            cout << "1";
        }
    }

    cout << "\n";
    


    
    

    
    
        


}

int main(){

    int t = 1; 
    
    cin >> t;
    

    while(t--){
        solve();
    }




    return 0;
}
      
       

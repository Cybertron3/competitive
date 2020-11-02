#include<bits/stdc++.h>
using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n; cin >> n;

    int arr[n];
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }

    sort(arr , arr + n);

    for(int i  =0 ; i< n ; i++){
        cout << arr[i] << " ";
    }    

    



    return 0;
}
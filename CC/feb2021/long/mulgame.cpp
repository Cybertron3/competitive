#include<bits/stdc++.h> 
using namespace std;

int main(){
            ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,q,m;
        cin>>n>>q>>m;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        int b[1000001] = {};
        int ans[m+1] = {};
        map<pair<int, int>, int> m1;
        while(q--){
            int l,r;
            cin>>l>>r;
            l--,r--;
            if(a[l]>m) continue;
            else if(a[l]<=m && a[r]>m) b[a[l]]++,b[m+1]--;
            else if(a[r]<=m){
                b[a[l]]++,b[m+1]--;
                m1[{a[l],a[r]}]++;
            }
        }

        for(auto x : m1){
            int k = x.first.first, p = x.first.second;
            int l=x.second;
            b[p+k]-=l;
            int c=p+2*k;
            b[c]+=1;
            while(c+p<=m){
                c+=p;
                b[c]-=l;
                b[c+k]+=l;
                c+=k;
            }
        }
        int ax=0;
        for(int i=1;i<m;i++){
            b[i]+=b[i-1];
            ax=max(ax,b[i]);
        }
        cout<<ax<<endl;
    }
    return 0;
}
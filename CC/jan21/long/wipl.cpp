#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define endl '\n'
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
ll isSubsetSum(vector<ll>&set, vector<ll>&pre, ll n, ll sum, ll k){
bool subset[n + 1][sum + 1];
for (ll i = 0; i <= n; i++) subset[i][0] = true;
for (ll i = 1; i <= sum; i++) subset[0][i] = false;
for (ll i = 1; i <= n; i++) {
for (ll j = 1; j <= sum; j++) {
if (j < set[i - 1]) subset[i][j] = subset[i - 1][j];
if (j >= set[i - 1]) subset[i][j] = subset[i - 1][j] || subset[i - 1][j - set[i - 1]];
}
}
for(ll i=1;i<=n;i++){
for(ll j=k;j<=sum;j++){
if(pre[i-1]-j>=k && subset[i][j]){
return i;
}
}
}
return -1;
}
int main() {
fast
ll t=1; cin>>t;
while(t--){
ll n,k,i; cin>>n>>k;
vector<ll>a(n),pre(n);
for(i=0;i<n;i++) cin>>a[i];
if(n==1){
cout<<-1<<endl;
continue;
}
sort(a.begin(),a.end(),greater<ll>());
if(a[0]>=k){
ll ans=-2,sum=0;
for(i=1;i<n;i++){
sum+=a[i];
if(sum>=k){
ans=i;
break;
}
}
cout<<ans+1<<endl;
continue;
}
pre[0]=a[0];
for(i=1;i<n;i++) pre[i]=a[i]+pre[i-1];
cout<<isSubsetSum(a,pre,n,2*k,k)<<endl;
}
}
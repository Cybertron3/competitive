#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define endl "\n"
#define ll long long
#define forr(i,x,n) for(ll i=x;i<n;i++)
#define pb push_back
#define loop ll t;cin>>t;while(t--)
ll gcd(ll a, ll b) { return b ? gcd(b,a%b) : a; }
ll lcm(ll a, ll b) { return a * b / gcd(a,b); }

const int mod = 1000000007;

long long find(ll num){
    // string al= to_string(l);
    // int n=al.length();
    // string y= al.substr(0,n-1);
    // //cout<<y;
    // string z=y;
    // reverse(z.begin(),z.end());
    // al=y+al[n-1]+z;
    // l=stoi(al);
    // return l;
    ll digits=floor(log10(num)+1);
    //if(digits==1)return num;
    ll x= num*pow(10,digits-1);
    ll rev=0, in =num/10;
    /**integer reversing**/
    while(in)
    {
        rev *= 10;
        rev += in % 10;
        in /= 10;
    }
    
    /*stackover**/
    // string s=to_string(in);
    // reverse(s.begin(),s.end());
    // int val = rev;
    // for(ll z=0;z<s.length();z++) {
    //     val = val*10 + (s[z] - '0');
    // }
    // stringstream geek(s);
    // geek>>rev;

    // rev=stoi(s);
    x=x+rev;
    return x;
}

// ll fastexpo(ll base, ll exp){
//     //cin>>base>>exp>>MOD;
//     ll res=1;
//     while(exp>0) 
//     {
//         if(exp%2==1)
//             res=(res*base)%mod;
//         base=(base*base)%mod;
//         exp/=2;
//     }
//     return res%mod;
// }

int main()
{
    SPEED;
    loop
    {
        ll l, r;
        cin>>l>>r;
        ll p=l;
        l= find(l);
        ll sum =0;
        ll q;
        for(ll i=p+1;i<=r;i++){
            //cout<<i<<endl;
            q=find(i);
            //cout<<q<<endl;
            sum+=q;
        }
        //cout<<"sum"<<sum<<endl;
        ll base=l, exp=sum;
        ll res=1;
        while(exp>0) 
        {
            if(exp%2==1)
                res=(res*base)%mod;
            base=(base*base)%mod;
            exp/=2;
        }
        //return res%mod;
        cout<<res%mod<<endl;
        //cout<<l;
        //cout<<x;

    }
    return 0;
}
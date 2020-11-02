#include <bits/stdc++.h>
#define mod 1000000007
#define db(a) cout << a << endl
#define db2(a,b) cout << a << " " << b << endl
#define dbp(a) cout << a.first << " " << a.second << endl
#define adb(a) for(auto i:a) cout << i << " "; cout << endl
#define adb2(a) for(auto i:a) cout << i.first << " " << i.second << endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define N 100010
using namespace std;
 
int main()
{
    
 
    fastIO;
    int t;
    cin >> t;
 
    while(t--)
    {
        int n;
        cin >> n;
 
        long long pi[n], ci[n], i;
        for(i=0;i<n;i++) cin >> pi[i] >> ci[i];
 
        bool pos = true;
        for(i=0;i<n;i++)
        {
            if((i > 0 && (pi[i] < pi[i-1] || ci[i] < ci[i-1] || (pi[i]-pi[i-1]) < (ci[i]-ci[i-1]))) || pi[i] < ci[i]) 
            {
                pos = false;

                cout << " i = "  << i << endl;
                break;
            }
        }
 
        if(pos) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
} 
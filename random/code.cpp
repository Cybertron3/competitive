
#include <bits/stdc++.h>
using namespace std;

#define ulli unsigned long long int
#define lli long long int
#define loop(i,a,b) for(int i=a;i<b;i++)

int magnet(string s, int k) {
    queue<int> mg;
    queue<int> iron ;
    bool mag = false;
    bool ir = false;
    int cs = 0;
    int ans = 0;
    int arr[s.size() + 5] ;
    arr[0] = 0;
    loop(i, 1, s.size()) {
        if (s[i] == ':') arr[i] = arr[i - 1] + 1;
        else arr[i] = arr[i - 1];
    }

    loop(i, 0, s.size()) {
        if (!mag && !ir && s[i] == 'M') { // M
            mg.push(i);
            mag = true;
        } else if (!mag && !ir && s[i] == 'I' ) { // I
            iron.push(i);
            ir = true;
        } else if (!ir && mag && s[i] == 'M') { // MM
            mg.push(i);
        } else if (!mag && ir && s[i] == 'I') { // II
            iron.push(i);
        } else if (mag && !ir && s[i] == 'I') { // MI
            cout << "dnczhsbvasjdnv0\n";
            // bool flag = false;
            int flag = 0;
            while (flag == 0) {

                if (mg.empty()) {
                    flag = 1;
                    break;
                }

                int m_index = mg.front();

                cs = arr[i] - arr[m_index];
                int p = k + 1 - abs(i - m_index) - cs;
                cout << "p: " << p << " queue : " << (int)mg.size() << endl;
                mg.pop();
                // cout <<  ;
                if (p > 0) { // M at index m_index attract iron at index i
                    cout << " entered " ;
                    flag = 1;
                    ans++;
                    // mg.pop();
                    // cs = 0;-
                } else if (mg.empty()) { // mg queue is empty , no more mg
                    flag = 1;
                    iron.push(i);
                    ir = true;
                }

                // flag = false;
                cout << "Flag : " << flag << endl;
            }

        } else if (!mag && ir && s[i] == 'M') {

            bool flag = true;
            while (flag) {
                int m_index = iron.front();
                cs = arr[i] - arr[m_index];
                int p = k + 1 - abs(i - m_index) - cs;
                iron.pop();
                if (p > 0) { // M at index m_index attract iron at index i
                    flag = false;
                    ans++;
                    // mg.pop();
                    // cs = 0;-
                } else if (iron.empty()) { // mg queue is empty , no more mg
                    flag = false;
                    mg.push(i);
                    mag = true;
                }
                cout << "Flag : " << flag << endl;
            }
        } else if (s[i] == ':' || s[i] == '_') {
            continue;
        } else if (s[i] == 'X') {
            while (mg.size() != 0) {
                mg.pop();
            }
            while (iron.size() != 0) {
                iron.pop();
            }
            ir = false;
            mag = false;
        }
    }
    return ans;
}

int main() {
// your code goes here

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int testcase;
    cin >> testcase;
    while (testcase--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // cout << endl;
        int ans = magnet(s, k);
        cout << ans << endl;
    }
    return 0;
}
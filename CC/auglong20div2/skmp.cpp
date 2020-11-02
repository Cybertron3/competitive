#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string S , P;
        cin >> S >> P;

        int freq[26];
        memset(freq , 0 , sizeof(freq));

        for(int i = 0; i < S.size() ; i++){
            freq[S[i] - 'a']++;
        }

        for(int i = 0; i < P.size() ; i++){
            freq[P[i] - 'a']--;
        }

        vector<char> f , e;

        bool flag = false;

        for(int i = 0; i < P.size() ; i++){
            if(P[i] > P[0]){
                flag = true;
                break;
            }else if(P[i] < P[0]){   
                break;
            }
        }


        int ch = P[0] - 'a';

        for(int i = 0; i < 26 ; i++){
            if(i < ch ){
                while(freq[i]--){
                    f.push_back(i+'a');
                }

            }else if(i > ch){
                while(freq[i]--){
                    e.push_back(i + 'a');
                }

            }else{
                if(flag){
                    while(freq[i]--){
                        f.push_back(i+'a');
                    }
                }else{
                    while(freq[i]--){
                        e.push_back(i + 'a');
                    }

                }

            }

        }

        for(int i = 0; i < f.size() ; i++){
            cout << f[i];
        }

        cout << P;

        for(int i = 0; i < e.size(); i++){
            cout << e[i];
        }

        cout << "\n";



    }
}
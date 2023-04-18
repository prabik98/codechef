#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL); cout.tie(NULL);
    
    int T;
    cin >> T;
    while (T--){
        ll N;
        cin >> N;
    	string U;
        cin >> U;
        N=U.size();
    
        char curr_char = U[0];
        int curr_count = 1;
        string S = "";
        
        for (int i = 1; i < N; i++) {
            if (U[i] == curr_char) {
                curr_count++;
            } 
            else {
                int y = 0;
                while (1){
                    if (curr_count-2*(y+1) > 0)
                        y++;
                    else
                        break;
                }
                int x=curr_count-2*y;
                for (int j = 0; j < x; j++) {
                    S += curr_char;
                }
                curr_char = U[i];
                curr_count = 1;
            }
        }
        int y = 0;
        while (1){
            if (curr_count-2*(y+1) > 0)
                y++;
            else
                break;
        }
        int x=curr_count-2*y;
        for (int j = 0; j < x; j++) {
            S += curr_char;
        }
        cout << S << endl;
        }
    
    return 0;
}
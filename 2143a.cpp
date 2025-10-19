#include <bits/stdc++.h>
using namespace std;

void solve() {
    size_t n = 0; cin >> n;

    if (n == 1 || n == 2){
        cout << "yes\n";
        return;
    }


    vector<int> perm(n);
    for (size_t i = 0;i < n;i++){
        int x; cin >> x;
        perm[i] = x;
    }

    int max = 0; // index of max value
    for (int i = 0; i < n; i++){
        if(perm[i] == n){
            max = i;
            break;
        }
    }

    if (max == 0 && perm[1] != (int)n - 1){ cout << "no\n"; return;} // max at start
    if (max == (int)n - 1 && perm[n-2] != (int)n - 1) {cout << "no\n"; return;} // max at end
    
    // is max beside max -1 -> no

    if (perm[max - 1] != n - 1 || perm[max + 1] != n - 1){
        cout << "no\n";
        return;
    }

    bool minbefore = true;

    if (perm[max - 1] == n - 1){
        minbefore = false;
    }

    if (minbefore){
        int diff = perm[max] - perm[max - 1];
        int numsafter = n - 1 - max;
        max = perm[max];


    } else{
        int diff = perm[max] - perm[max + 1];
    }
    
    cout << "yes\n";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
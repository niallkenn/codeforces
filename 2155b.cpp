#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k; cin >> n >> k;
    int added = 0;

    if (k == n * n - 1 || k > n * n){
        cout << "NO" << endl;
        return;
    }

    cout << "YES" << endl;

    string answer = "";

    for (int i = 0; i < k; i++){
        answer += "U";
        added++;
    }

    for (int i = 0; i < ((n * n) - k - n); i++){
        answer += "D";
        added++;
    }

    answer += "R";
    added++;

    for (int i = 0; i < n * n - added; i++){
        answer += "L";
    }

    int index = 0;
    for (int i = 0; i < n; i++){
        for (int x = 0; x < n; x++){
            cout << answer[index];
            index ++;
        }
        cout << endl;
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
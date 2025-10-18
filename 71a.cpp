#include <bits/stdc++.h>
using namespace std;

void solve() {
    string str; cin >> str;

    if (str.length() > 10){
        string n = ""; n += str[0];
        n += (to_string(str.length() - 2));
        n += str[str.length() - 1];

        cout << n << endl;
        return;
    }

    cout << str << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
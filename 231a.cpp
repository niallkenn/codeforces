#include <bits/stdc++.h>
using namespace std;

int answer = 0;

void solve() {
    vector<int> team = {};

    for (int i=0;i<3;i++){
        int input; cin >> input; team.push_back(input);
    }

    stable_sort(team.begin(), team.end());

    if (team[1] == 1) answer++;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    cout << answer;
    return 0;
}
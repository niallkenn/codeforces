#include <bits/stdc++.h>
using namespace std;

void solve() {
    int answer;

    vector<int> nums = {};
    for (int i=0;i<3;i++){
        int x; cin >> x;
        nums.push_back(x);
    }

    sort(nums.begin(), nums.end());

    if (nums[0] == nums[1]){
        answer = nums[2];
    }else {
        answer = nums[0];
    }
    cout << answer << endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt; cin >> tt;
    while (tt--) solve();
    return 0;
}
